/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:50:30 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/01 21:01:58 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	put_nbr(int nb)
{
	char	c;

	if (nb > 9)
	{
		put_nbr(nb / 10);
	}
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int	power(int n, int p)
{
	n = n * n;
	p--;
	if(p > 1)
	{
		return power(n, p);	
	}	
	return n;
}

void	ft_print_combn(int n)
{
	int number[2];
	char c;
	
	number[0] = 0;
	while(number[0] <= (10 - n))
	{
		number[1] = number[0] + 1;
		while (number[1] <= (10 - (n - 1)))
		{
			c = number[1] + '0';
			char cc = number[0] + '0';
			write(1, &cc, 1);
			write(1, &c, 1);
			write(1, ", ", 2);
			number[1]++;
		}
		number[0]++;
	}	
}

int	main(void)
{
	ft_print_combn(2);
}
