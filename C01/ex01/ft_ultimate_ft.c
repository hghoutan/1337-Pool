/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 09:58:37 by hghoutan          #+#    #+#             */
/*   Updated: 2024/08/30 10:25:49 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
	printf("printed from the ft_ultimate_ft func: %d", *********nbr);
}

int	main(void)
{
	int n = 50;
	int *ptr0 = &n;
	int **ptr1 = &ptr0;
	int ***ptr2 = &ptr1;
	int ****ptr3 = &ptr2;
	int *****ptr4 = &ptr3;
	int ******ptr5 = &ptr4;
	int *******ptr6 = &ptr5;
	int ********ptr7 = &ptr6;
	int *********ptr8 = &ptr7;

	ft_ultimate_ft(ptr8);

	printf("%d", n);

}
