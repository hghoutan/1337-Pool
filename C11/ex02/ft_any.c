/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 22:23:09 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/17 10:04:25 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (((*f)(tab[i])) != 0)
			return (1);
		i++;
	}
	return (0);
}

int	ft_only_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (1);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int i;
	char *tab[] = {"iuhnj", "gggrdx", "pppoopop", "nfeonfenef", NULL};

		int n = ft_any(tab, &ft_only_lowcase);
		printf("should equal to 0 %d", n);

	return (0);
}*/
