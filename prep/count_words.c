int count_words(char *str)
{
  int i;
  int count;

  count = 0;
  i = 0;
  if (str[0] > 32 && str[0] <= 126)
    count++;
  while (str[i])
  {
    if (((str[i - 1] >= 9 && str[i - 1] <= 13) || str[i - 1] == 32) && (i != 0) && (str[i] > 32 && str[i] <= 126))
      count++;
    i++;
  }
  return (count);
}

#include <stdio.h>
int main()
{
  printf("%d", count_words(" Hey Hho are   you"));
}