#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
  int i;
  int l;

  i = 0;
  l = 0;
  if (ac != 2)
  {
    write(1, "\n", 1);
    return (0);
  }

  while (av[1][l])
  {
    l++;
  }

  while (i < l/2)
  {
    if (av[1][i] != av[1][l - i - 1])
    {
      break;
    }
    i++;
  }
  write(1, av[1], l);
  write(1, "\n", 1);
  return (0);
}
