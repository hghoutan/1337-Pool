/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 10:37:35 by hghoutan          #+#    #+#             */
/*   Updated: 2024/08/30 10:50:45 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;
	c = *b;
	*b = *a;
	*a = c;	
	printf("b: %d - a:%d", *b, *a);	
}

int	main(void)
{
	int a;
	int b;

	int	*ptra;
	int	*ptrb;

	a = 40;
	b = 60;

	ptra = &a;
	ptrb =&b;

	ft_swap(ptra, ptrb);
}
