#include <unistd.h>

int main(int argc, char **argv)
{
  int i;
  char c;

  char d;

  i = 0;
  if (argc != 2)
  {
    write(1, "\n", 1);
    return (0);
  }
  while(argv[1][i])
  {
    if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
      d = ('m' - (argv[1][i] - 'n'));
    else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
      d = 'M' - (argv[1][i] - 'N');
    else 
      d = argv[1][i];
    write(1, &d, 1);
    i++;
  }
  write(1, "\n", 1);
  return (0);
}