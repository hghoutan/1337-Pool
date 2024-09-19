#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
  int i;
  
  if (ac != 2)
  {
    write(1, "\n", 1);
    return (0);
  }

  i = 0;
  while (av[1][i])
  {
    if (av[1][i] >= 'A' && av[1][i] <= 'Z')
    {
      av[1][i] += 32;
    }
    i++;
  }
  

  if (av[1][0] >= 'a' && av[1][0] <= 'z')
    av[1][0] -= 32;
  i = 1;
  while (av[1][i])
  {
    if ((av[1][i] >= 'a' && av[1][i] <= 'z') && ((av[1][i - 1] >= 9 && av[1][i - 1] <= 13) || av[1][i - 1] == 32))
      av[1][i] -= 32;
    i++;
  }

  write(1, av[1], i);
  write(1, "\n", 1);
  return (0);
}