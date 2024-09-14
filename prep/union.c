#include <unistd.h>

int ft_exist(char *str, char c)
{
  int i;

  i = 0;
  while (str[i])
  {
    if (c == str[i])
      return (1);
    i++;
  }
  return (0);
  
}

int main(int argc, char **argv)
{
  int i;
  char chars[100];
  int count;

  i = 0;
  count = 0;
  if (argc != 3)
  {
    write(1, "\n", 1);
    return (0);
  }
  while (argv[1][i])
  {
    if (!ft_exist(chars, argv[1][i]))
      {
        chars[count] = argv[1][i];
        count++;
      }
    i++;
  }
  i = 0;
  while (argv[2][i])
  {
    if (!ft_exist(chars, argv[2][i]))
    {
      chars[count] = argv[2][i];
      count++;
    }
    i++;
  }
  write(1, chars, count);
  write(1, "\n", 1);
  return (0);
}