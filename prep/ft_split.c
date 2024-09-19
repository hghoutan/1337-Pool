#include <stdlib.h>

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int is_charset(char c, char *charset)
{
  int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_word(char *str, char *sep)
{
	int	i;
	int	count;
	int	word;

	i = 0;
	count = 0;
	word = 1;
	while (str[i])
	{
		if (!is_charset(str[i], sep))
		{
			if (word == 1)
				count++;
			word = 0;
		}
		else
			word = 1;
		i++;
	}
	return (count);
}

char  *split_arr(char *str, char  *sep, int *index)
{
  char  *cpy;
  int   c;
  int   i;

  i = *index;
  while(!is_charset(str[i],  sep))
  {
    i++;
  }
  cpy = (char *)malloc((i + 1) * sizeof(char));
  if(!cpy)
    return NULL;
  i = 0;
  while (is_charset(str[*index],  sep))
  {
    (*index)++;
  }
  while(!is_charset(str[*index],  sep))
  {
    cpy[i] = str[*index];
    i++;
    (*index)++;
  }
  cpy[i] = '\0';
  (*index)++;
  return (cpy);
}

char **ft_split(char *str, char *charset)
{
  char  **result;
  int   i_words;
  int   i;
  int   index;

  i = 0;
  index = 0;
  i_words = ft_count_word(str, charset);
  result = malloc(sizeof(char *) * (i_words + 1));
  if (!result)
		return (NULL);
  
  while (i < i_words)
  {
    result[i] = split_arr(str, charset, &index);
    i++;
  }
  result[i] = NULL;
  return (result);
}