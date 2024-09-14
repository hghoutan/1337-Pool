#include <unistd.h>

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

int main(int argc, char **argv)
{
	int size;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	size = ft_strlen(argv[1]);
	while((argv[1][size - 1] >= 9 && argv[1][size - 1] <= 13) || argv[1][size - 1] == 32)	
		size--;
	while ((argv[1][size - 1] != ' ' || (argv[1][size - 1] >= 9 && argv[1][size - 1] <= 13)) && size > 0)
	{
		size--;
	}
	while(argv[1][++size - 1] && (argv[1][size - 1] != ' ' || (argv[1][size - 1] >= 9 && argv[1][size - 1] <= 13)))
	{
		write(1, &argv[1][size - 1], 1);
	}
	write(1, "\n", 1);
	return (0);
}