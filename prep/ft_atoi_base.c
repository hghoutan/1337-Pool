#include <stdio.h>

unsigned int power(int n, int p)
{
  if (p == 0)
    return 1;
  if (p == 1)
    return n;
  return n * power(n, p -1);
}
int ft_index(char *str, char c)
{
  int i;

  i = 0;
  while (str[i])
  {
    if (str[i] == c)
    {
      return i;
    }
    i++;
  }
  return -1;
}

int ft_atoi_base(const char *str, int str_base)
{
  int i;
  int ng;
  int num;
  int l;
  char *hexa = "0123456789abcdef";
  char *hexa_m = "0123456789ABCDEF";

  i = 0;
  ng = 1;
  num = 0;
  if (str == NULL || str_base < 2 || str_base > 16)
		return 0;
  
  while (*str >= 9 && *str <= 13 || *str == 32)
  {
    str++;
  }
  if (*str == '+' || *str == '-')
  {
    if(*str == '-')
      ng = -ng;
    str++;
  }
  i = 0;
  while(str[i] >= '0' && str[i] <= '9' || str[i] >= 'a' && str[i] <= 'f' || str[i] >= 'A' && str[i] <= 'F')
  {
    i++;
  }
  l = 0;
  i--;
  while(str[l] >= '0' && str[l] <= '9' || str[l] >= 'a' && str[l] <= 'f' || str[l] >= 'A' && str[l] <= 'F')
  {
    if(str[l] >= 'A' && str[l] <= 'F')
      num +=  ft_index(hexa_m, str[l]) * power(str_base, i);
    else 
      num += ft_index(hexa, str[l]) * power(str_base, i);
    l++;
    i--;
  }
  return num;
}

int main()
{
  printf("%d", ft_atoi_base("1011", 8));
}