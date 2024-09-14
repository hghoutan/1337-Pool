#include <unistd.h>
#include <stdio.h>

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

void ft_putnbr(int n)
{
  int nb = (unsigned int)n;
  char c;

  if(nb > 9)
    ft_putnbr(n/10);
  
  c = (nb % 10) + '0';
  write(1, &c, 1);
}

int main(int argc, char **av)
{
  int i;
  int num;
  int r;
  char c;

  i = 0;
  num = 0;
  if (argc != 2)
  {
    write(1, "\n", 1);
    return (0);
  }
  while (av[1][i])
  {
    num = (10 * num) + av[1][i] - 48;
    i++;
  }
  i = 1;
  while (i <= 9)
  {
    c = i + '0';
    write(1, &c, 1);
    write(1, " x ", 3);
    write(1, av[1], ft_strlen(av[1]));
    write(1, " = ", 3);
    r = i * num;
    ft_putnbr(r);
    if(i != 9)
      write(1, "\n", 1);
    i++;
  }
  write(1, "\n", 1);
  return (0);
}