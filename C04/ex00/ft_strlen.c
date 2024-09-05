/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:06:15 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/02 19:09:45 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strlen(char	*str)
{
	int n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return n;
}

int main(void)
{
  int c  = strlen("Hey how are you");
  printf("%d", c);
  
  return 0;
}