#include <unistd.h>
#include <stdio.h>

int ft_exist(char  *str, char c)
{
  int i;

  i = 0;
  while (str[i])
  {
    if (str[i] == c)
      return (i);
    i++;
  }
  return (-1);
}

int ft_isbigger(char *s, char c)
{
  int i;

  i = 0;
  while (s[i])
  {
    if (s[i] > c + '0')
      return (0);
    i++;
  }
  return (1);
}
int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
  {
    i++;
  }
  return (i);
}

int main(int argc, char **argv)
{
  int i;
  int count;
  char index[100];

  i = 0;
  count = 0;
  if (argc != 3)
  {
    write(1, "\n", 1);
    return (0);
  }
  while (argv[1][i])
  {

    if (ft_exist(argv[2], argv[1][i]) != -1 && ft_isbigger(index, ft_exist((argv[2])+index[ft_strlen(index)], argv[1][i])))
    {
      write(1, &argv[1][i], 1);
      index[count] = ft_exist(argv[2], argv[1][i]);
      count++;
    }
    i++;
  } 
}