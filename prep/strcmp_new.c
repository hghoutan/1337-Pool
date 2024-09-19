int    ft_strcmp(char *s1, char *s2)
{
  int i;

  i = 0;
  while (s1[i] && s2[i] && s1[i] == s2[i])
  {
    i++;
  } 
  return s1[i] - s2[i];
}
#include <stdio.h>
int main()
{
  char *s1 = "Hey How are youa";
  char *s2 = "Hey How are you";
  printf("%d", ft_strcmp(s1, s2));
}