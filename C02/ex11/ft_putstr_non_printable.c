/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:34:00 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/01 17:50:38 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*int_hexa(int r, char	*c)
{
	if (r > 9)
	{
		c[0] = (r / 10) + '/';
		c[1] = (r % 10) + 'a';
	}
	else
	{
		c[0] = '0';
		c[1] = r + '0';
	}
	return c;
}

char	*convert_hexa(char	c)
{
	int r;
	int i;
	static char	cc[2];

	i = 0;
	while (c / 16 != 0)
	{
		r = c % 16;
		int_hexa(r, cc);
		c /= 16;
		i++;
	}
	r = c % 16;
	int_hexa(r, cc);
	return cc;
}
void	offset(char c, int p, char	*cc)
{
	int i;
	int ii;

	i = 0;
	while(cc[i] != '\0')
	{
		i++;	
	}
	ii = i;
	while (i >= p)
	{
		cc[i] = cc[i -1];
		if (i == p)
		{
			cc[i] = c;
		}
		i--;
	}
	cc[ii + 1] = '\0';
}
void	ft_putstr_non_printable(char	*str)
{
	int i;
	char	*cc;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			cc = convert_hexa(str[i]);
			str[i] = '\\';
			offset(cc[0], i + 1, str);
			offset(cc[1], i + 2, str);
		}
		i++;
	}
}

int	main(void)
{
	char	c[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(c);
	printf("%s", c);
}
