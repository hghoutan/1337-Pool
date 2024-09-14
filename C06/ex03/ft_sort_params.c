/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 13:49:17 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/09 17:24:57 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_sort_tab(char **argv)
{
	char	*swap;
	int		i;

	i = 1;
	while (argv[i + 1])
	{
		if (ft_strcmp(argv[i],  argv[i + 1]) > 0)
		{
			swap = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = swap;
		}
		i++;
	}
}
void	ft_print(**arg)
{
	int i;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
		}
		write(1, "\n", 1);
		i++;
	}	
}
int main(int argc, char	**argv)
{
	int		i;
	int		j;
	char 	*swap;

	i = 1;
	if(argc == 1)
		return (0);
	if (argc == 2)
	{
		ft_print(argv);
		return (0);
	}
	while (argv[i + 1])
	{
		if (ft_strcmp(argv[i],  argv[i + 1]) > 0)
		{
			ft_sort_tab(argv);	
		}
		i++;
	}
	i = 1;
	ft_print(argv);
}
