/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_find_solution.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <hghoutan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:39:44 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/17 21:13:36 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh_bsq.h"

int	ft_min(int a, int b, int c)
{
	if (a <= b && a <= c)
	{
		return (a);
	}
	else if (b <= a && b <= c)
	{
		return (b);
	}
	else
	{
		return (c);
	}
}

int	**ft_generate_map(int l, int c)
{
	int	**map2;
	int	i;

	i = 0;
	map2 = malloc(l * sizeof(int *));
	if (map2 == NULL)
		return (NULL);
	while (i < l)
	{
		map2[i] = malloc(c * sizeof(int));
		if (map2[i] == NULL)
			return (NULL);
		i++;
	}
	return (map2);
}

int ft_biggest_square(t_BSQ_Map map) {
    int **c_m;
    int count_max;

    c_m = ft_generate_map(map.l, map.c);
    count_max = calculate_biggest_square(map, c_m);
    free(c_m);
    return count_max;
}

int calculate_biggest_square(t_BSQ_Map map, int **c_m) {
    int i = 0;
    int count_max = 0;

    while (i < map.l) {
        count_max = process_row(map, c_m, i, count_max);
        i++;
    }

    return count_max;
}

int process_row(t_BSQ_Map map, int **c_m, int i, int count_max) {
    int j = 0;

    while (j < map.c - 1) {
        if (map.map[i][j] == map.o) {
            c_m[i][j] = 0;
        } else if (i == 0 || j == 0) {
            c_m[i][j] = 1;
        } else {
            c_m[i][j] = ft_min(c_m[i - 1][j], c_m[i][j - 1], c_m[i - 1][j - 1]) + 1;
        }

        if (c_m[i][j] > count_max) {
            count_max = c_m[i][j];
        }

        j++;
    }

    return count_max;
}

int ft_find_position_square(t_BSQ_Map map) {
    int **c_m;
    int count_max;
    int position;

    c_m = ft_generate_map(map.l, map.c);
    count_max = ft_biggest_square(map);
    position = find_square_position(map, c_m, count_max);
    free(c_m);
    return position;
}

int find_square_position(t_BSQ_Map map, int **c_m, int count_max) {
    int i = 0;
    int position = -1;

    while (i < map.l) {
        position = process_row_for_position(map, c_m, count_max, i, position);
        if (position != -1) {
            break;  // Found the position, exit the loop
        }
        i++;
    }

    return position;
}

int process_row_for_position(t_BSQ_Map map, int **c_m, int count_max, int i, int position) {
    int j = 0;

    while (j < map.c - 1) {
        if (map.map[i][j] == map.o) {
            c_m[i][j] = 0;
        } else if (i == 0 || j == 0) {
            c_m[i][j] = 1;
        } else {
            c_m[i][j] = ft_min(c_m[i - 1][j], c_m[i][j - 1], c_m[i - 1][j - 1]) + 1;
        }

        if (c_m[i][j] == count_max) {
            position = i * (map.c - 1) + j;
            break;  // Exit the loop once the position is found
        }
        j++;
    }

    return position;
}
