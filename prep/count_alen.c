int    count_alen(char *str)
{
  int i;
  int l;

  i = 0;
  l = 0;
  while (str[l])
    l++;
  while (str[i])
  {
    if (str[i] == 'a')
      return i;
    i++;
  }
  return (l);
}
#include <stdio.h>
int main()
{
  char *str = "HZNUINNBBIniune";
  printf("%d", count_alen(str));
}