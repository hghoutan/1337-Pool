#include <stdio.h>
#include <unistd.h>

int ft_atoi(const char *str)
{
	int i;
	int ng;
	int num;
	
	i = 0;
	ng = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '-')
	{
		i++;
		ng = -1;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (num * ng);
}

int main()
{
	printf("%d", ft_atoi("		-153078"));
}
