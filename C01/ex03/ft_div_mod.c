/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 10:54:48 by hghoutan          #+#    #+#             */
/*   Updated: 2024/08/30 11:57:37 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int a;
	int b;
	int div;
	int mod;
	
	div = 0;
	mod = 0;
	a = 4;
	b = 2;
	

		
	ft_div_mod(a, b, &div, &mod);

	printf("division : %d - modulo: %d", div, mod);

}
