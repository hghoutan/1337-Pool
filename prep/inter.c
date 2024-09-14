#include <unistd.h>

int ft_exist(char *chars, char c)
{
	int i;

	i = 0;
	while (chars[i])
	{
		if (c == chars[i])
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	int count;
	char chars[100];

	i = 0;
	count = 0;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		j = 0;
		while (argv[2][j])
		{
			if(argv[1][i] == argv[2][j] && (!ft_exist(chars, argv[1][i])))
			{
				chars[count] = argv[1][i];
				count++;
			}
			j++;	
		}
		chars[count] = '\0';
		i++;
	}
	write(1, chars, count);
	write(1, "\n", 1);
	return (0);
}