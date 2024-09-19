char    *ft_strrev(char *str)
{
  int i;
  int len;
  char  swap;

  i = 0;
  len = 0;
  while (str[len])
  {
    len++;
  }
  while(i < len/2)
  {
    swap = str[i];
    str[i] = str[len - 1 - i];
    str[len - 1 - i] = swap;
    i++;
  }
  return (str);
}
#include <stdio.h>
int main()
{
  char str[] = "Hicham";
  ft_strrev(str);
  printf("%s", str);
}