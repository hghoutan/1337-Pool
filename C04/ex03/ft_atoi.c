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

#include <unistd.h>
#include <stdio.h>

int power(int n, int p)
{
  if(p == 1)
  {
    return n;
  }
  n = n * 10;
  return power(n, p - 1);
}

int length_digits(char *str)
{
  int flag;
  int count;
  int i;

  flag = 1;
  count = 0;
  i = 0;
  while(str[count])
  {
    if(str[count] >= '0' && str[count] <= '9' && flag)
    {
      i++;
      count++;
      continue;
    }
    count++;
    flag = 0;
  }
  return i;
}

int calculate_num(char *str, int i)
{
  int flag;
  int num;

  flag = 1;
  num = 0;
  while(*str)
  {
    if(*str >= '0' && *str <= '9' && flag)
    {
      num += power(*str - 48, i);
      i--;
      str++;
      continue;
    }
    str++;
    flag = 0;
  }
  return num;
}


int ft_atoi(char  *str)
{
  int ng;
  int i;
  int num;

  ng = 0;
  while (*str == ' ' || *str == '+' || *str == '-')
  {
    if (*str == '-')
    {
      ng = 1;
    }
   str++;
  }
  i = length_digits(str);
  num = calculate_num(str, i);
  if (ng)
    return (-num);
  return (num);
}

int main() {
    int num = ft_atoi("  ---+--1234ab567");
    printf("%d", num);
    return 0;
}