#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while(s1[i] && s2[i])
	{
		if (s2[i] == s1[i])
		{
			i++;
			continue;
		}
		return s1[i] - s2[i];
	}
	return s1[i] - s2[i];
}

int main()
{
	printf("%d", ft_strcmp("Hey How are you", "Hey How are you"));
}