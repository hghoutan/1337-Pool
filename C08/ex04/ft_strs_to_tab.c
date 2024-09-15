/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 01:12:59 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/15 13:56:38 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	fill_stock(int i, struct s_stock_str *item, char **av)
{
	int	j;

	j = 0;
	while (av[i][j])
	{
		item->str[j] = av[i][j];
		item->copy[j] = av[i][j];
		j++;
	}
	item->str[j] = '\0';
	item->copy[j] = '\0';
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*stock;
	struct s_stock_str	*item;
	int					i;

	i = 0;
	stock = (struct s_stock_str *)malloc((ac + 1)
			* (sizeof(struct s_stock_str)));
	if (stock == NULL)
		return (0);
	while (i < ac)
	{
		item = (struct s_stock_str *)malloc(sizeof(struct s_stock_str));
		item->size = ft_strlen(av[i]);
		item->str = (char *)malloc((item->size + 1) * sizeof(char));
		item->copy = (char *)malloc((item->size + 1) * sizeof(char));
		fill_stock(i, item, av);
		stock[i] = *item;
		free(item);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
/*

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		nb = (-nb);
		write(1, "-", 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while(par[i].str)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, par[i].size);
		write(1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	char *strs[] = {"Hicham", "Ghoutani", "How are", "Honix", "BDbdB", "YBEEE"};
	struct s_stock_str * stock= ft_strs_to_tab(6, strs);

	ft_show_tab(stock);

}*/
