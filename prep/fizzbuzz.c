#include <unistd.h>

void ft_putnbr(int n)
{
  char c;
  if (n >= 10)
  {
    ft_putnbr(n / 10);
  }
  c = (n % 10) + 48;
  write(1, &c, 1);
}
int main()
{
  int i;

  i = 0;
  while (i <= 100)
  {
    if (i % 7 == 0 && i % 4 == 0)
      write(1, "buzzfizz\n", 9);
    else if((i % 7 == 0))
      write(1, "fizz\n", 5);
    else if(i % 4 == 0)
      write(1, "buzz\n", 5);
    else
    {
      ft_putnbr(i);
      write(1, "\n", 1);
    }
    i++;
  }
}