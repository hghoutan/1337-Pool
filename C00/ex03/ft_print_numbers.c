/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:03:36 by hghoutan          #+#    #+#             */
/*   Updated: 2024/08/29 16:29:37 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		count;
	char	nbr;

	count = 0;
	nbr = '0';
	while (count < 10)
	{
		write(1, &nbr, 1);
		nbr++;
		count++;
	}
}
