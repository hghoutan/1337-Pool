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

void convert_to_char(int nbr, char *c_nbr, int *i)
{
  if(nbr > 9)
  {
    convert_to_char(nbr / 10, c_nbr, i);
  }
  c_nbr[*i] = (nbr % 10) + '0';
  (*i)++;
  c_nbr[*i + 1] = '\0';
}

int power(int n, int p)
{
  if(p == 1)
  {
    return n;
  }
  n = n * 10;
  return power(n, p - 1);
}
int pp(int n, int p)
{
  if(p == 2)
  {
    return n;
  }
  n = n * n;
  return power(n, p - 1);
}

int convert_base_to_int(char *base, int  *n)
{
  int count;
  int s;

  count = 0;
  while (base[count])
  {
    count++;
  }
  s = count;
  while (*base)
  {
    *n += power(*base - 48, count);
    count--;
    base++;
  }  
  return s;
}

void calculate_num(int num, int base, int size)
{
  int m;
  int r;
  int c;

  r = 0;

  while (num / base != 0)
	{
		r = num % base;
    printf("%d - ", r);
		//int_hexa(r, cc);
		num /= base;
		num++;
	}
	r = num % base;
  printf("%d - ", r);
	//int_hexa(r, cc);
  // while (*num)
  // {
  //   m += (*num) * pp(base, size);
  //   size--;
  //   num++;
  // }
}

void  ft_putnbr_base(int nbr, char  *base)
{
  char c_nbr[20] = "";
  int i_base;
  int length;

  length = 0;
  i_base = 0;
  convert_base_to_int(base, &i_base);
  convert_to_char(nbr, c_nbr, &length);
  calculate_num(nbr, i_base, length);
}

int main(void)
{
  ft_putnbr_base(2324, "16");
}
