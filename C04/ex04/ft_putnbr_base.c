/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:06:15 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/05 23:37:40 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	logt(int n, int p)
{
	if (p != 1)
		n = 10 * logt(n, p - 1);
	return (n);
}

int	convert_base_to_int(char	*base, int	*n)
{
	int	length;
	int	s;

	length = 0;
	while (base[length])
	{
		length++;
	}
	s = length;
	while (*base)
	{
		*n += logt(*base - 48, length);
		length--;
		base++;
	}
	return (s);
}

char	convert_base(int n, int base)
{
	char	*hexa;
	char	*octal;

	hexa = "0123456789ABCDEF";
	octal = "poneyvif";
	if (base == 16)
		return (hexa[n]);
	if (base == 8)
		return (octal[n]);
	return (n + '0');
}

void	convert_num(int num, int base)
{
	int		size;
	int		i;
	char	cc[30];
	char	c;

	i = 0;
	while (num / base != 0)
	{
		cc[i] = convert_base(num % base, base);
		num = num / base;
		i++;
	}
	cc[i] = convert_base(num % base, base);
	size = i + 1;
	i = -1;
	while (++i < (size / 2))
	{
		c = cc[i];
		cc[i] = cc[size - i - 1];
		cc[size - i - 1] = c;
	}
	cc[size] = '\0';
	write(1, cc, size);
}

void	ft_putnbr_base(int nbr, char	*base)
{
	int	i;

	i = 0;
	if (base[i] == '\0')
		return (void);
	while (base[i])
	{
		if (base[i] == ' ' || base[i] == '-' || base[i] == '+')
			return (void);
		i++;
	}
	if (nbr < 0)
	{
		nbr = (-nbr);
		write(1, "-", 1);
	}
	i = 0;
	convert_base_to_int(base, &i);
	convert_num(nbr, i);
}

