#include <stdio.h>
unsigned int power(int n, int p)
{
	if (p == 0)
		return 1;
	if (p == 1)
		return n;
	return n * power(n, p-1);
}

int	is_power_of_2(unsigned int n)
{
	int i;
	
	i = 0;	
	while (i < 32)
	{
		if (power(2, i) == n)
			return (1);
		i++;	
	}
	return (0);
}
int main()
{
	printf("%d", is_power_of_2(3));
}