#include <stdio.h>
#include <string.h>

int ft_contains(const char *str, char c)
{
  int i;

  i = 0;
  while (str[i])
  {
    if (str[i] == c)
      return (1);
    i++;
  }
  return (0);
}

size_t ft_strcspn(const char *s, const char *reject)
{
  unsigned int i;

  i = 0;
  while (s[i])
  {
    if (ft_contains(reject, s[i]))
      return (i);
    i++;
  }
  return (i);
}

int main() {
    // Test case 1: Simple example
    char s1[] = "hello world";
    char reject1[] = "xyz";
    size_t result1 = ft_strcspn(s1, reject1);
    printf("Test case 1: Expected 11, Got %zu\n", result1);

    // Test case 2: Reject string is empty
    char s2[] = "hello world";
    char reject2[] = "";
    size_t result2 = ft_strcspn(s2, reject2);
    printf("Test case 2: Expected %zu, Got %zu\n", strlen(s2), result2);

    // Test case 3: Reject string contains all characters of s
    char s3[] = "hello";
    char reject3[] = "helo";
    size_t result3 = ft_strcspn(s3, reject3);
    printf("Test case 3: Expected 0, Got %zu\n", result3);

    // Test case 4: s is empty
    char s4[] = "";
    char reject4[] = "xyz";
    size_t result4 = ft_strcspn(s4, reject4);
    printf("Test case 4: Expected 0, Got %zu\n", result4);

    // Test case 5: Reject string contains some characters of s
    char s5[] = "hello world";
    char reject5[] = "lo";
    size_t result5 = ft_strcspn(s5, reject5);
    printf("Test case 5: Expected 4, Got %zu\n", result5);

    return 0;
}