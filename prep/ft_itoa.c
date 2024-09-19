#include <stdio.h>
#include <stdlib.h>

int ft_intlen(int nbr)
{
  int count;

  count = 0;
  while (nbr / 10)
  {
    nbr /= 10;
    count++;
  }
  count++;
  return(count);

}
void ft_rev(char *str)
{
  int i;
  int l;
  char s;

  i = 0;
  l = 0;
  while (str[l])
    l++;
  while (i < l/2)
  {
    s = str[i];
    str[i] = str[l - i - 1];
    str[l - i - 1] = s;
    i++;
  }
}

char    *ft_itoa(int nbr)
{
  int i_len;
  int count;
  int ng;
  char  *str;
  char *cpy;

  ng = 0;
  if (nbr < 0)
  {
    nbr = -nbr;
    ng = 1;
  }

  i_len = ft_intlen(nbr);
  count = 0;
  str = (char *)malloc((i_len + 1) * sizeof(char));
  
  while (nbr / 10)
  {
    str[count] = (nbr % 10) + '0';
    nbr /= 10;
    count++;
  }
  str[count++] = (nbr % 10) + '0';
  
  ft_rev(str);
  if(ng) 
    {
      
      cpy = (char *)malloc((i_len + 2) * sizeof(char));
      cpy[0] = '-';
      count = 1;
      while (str[count - 1])
      {
        cpy[count] = str[count - 1];
        count++;
      }
      cpy[count] = '\0';
      return (cpy);
    }
  return (str);
}

int main()
{
  int n;

  char *str = ft_itoa(-20040904);
  printf("s is %s", str);
}
