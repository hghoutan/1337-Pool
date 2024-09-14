#include <unistd.h>
#include <stdio.h>

void  print_bits(unsigned char octet)
{
  char c;
  char cc[9];
  int i;
  int count;

  i = 0;
  while (octet / 2 != 0)
  {
    cc[i] = (octet % 2) + '0';
    i++;
    octet /= 2;
  }
  cc[i] = (octet % 2) + '0';
  i++;
   while (i < 8)
   {
     cc[i] = '0';
     i++;
  }
  count = 0;
  while (count < i / 2)
  {
    c = cc[i - 1 - count];
    cc[i - 1 - count] = cc[count];
    cc[count] = c;
    count ++; 
  }
  
  write(1, cc, i);
}

int main()
{
  char c = 'a';
  print_bits(c);
}