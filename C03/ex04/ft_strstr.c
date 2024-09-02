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

int is_valid(int i, int count, char	*to_find, char *str)
{
	int flag;

	flag = 1;
	while(to_find[i])
			{
				if(to_find[i] != str[count])
					flag = 0;
				count++;
				i++;
			}
			if(flag != 0)
				return flag;
	return flag;

}

char	*ft_strstr(char	*str, char	*to_find)
{
	int count;
	int i;
	int index;
	int flag;

	count = 0;
	i = 0;
	index = 0;

	if(*to_find == '\0')
		return str;
	while(str[count])
	{
		if(str[count] == to_find[i])
		{
			index = count;
			flag = is_valid(i, count, to_find, str);
			if(flag != 0)
				return str+index;
		}
		count++;
	}
	return ("\0");
}
