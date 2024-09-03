/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:17:31 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/02 21:31:35 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlcat(char	*dest, char	*src, unsigned int nb)
{
  nb--;
	while (*src)
	{
    src++;
    nb++;
	}
	return nb;
}

int main(void)
{
	char src[20] = "Hejio";
	char dest[] = "Ok kor";
	
	printf("before : %lu", sizeof(dest));
	int n = ft_strlcat(dest, src, sizeof(dest));
  printf("After : %s - %d", dest, n);
}
