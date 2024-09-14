#include <stdio.h>

int max(int *tab, unsigned int len)
{
  int i;
  int max;

  i = 0;
  max = 0;
  while (i < len)
  {
    if (tab[i] > max)
      max = tab[i];
    i++;
  }
  return (max);
}

int main()
{
  int tab[] = {};
  int maxNum = max(tab, 0);

  printf("%d", maxNum);
}