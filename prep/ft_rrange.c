#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
  int *arr;
  int i;

  i = 0;
  if (start < end)
    arr = (int *)malloc((end - start) * sizeof(int));
  else 
    arr = (int *)malloc((start - end) * sizeof(int));
  
  while (start != end)
  {
    arr[i] = end;
    end += (end > start) ? -1 : 1;
    i++;
  }
  arr[i] = end;
  return (arr);
}

int main()
{
  int i = 0;
  int *arr = ft_rrange(-1, 3);
  while (i < 5)
  {
    printf("%d", arr[i]);
    i++;
  }
}