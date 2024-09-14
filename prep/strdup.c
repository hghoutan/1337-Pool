  #include <stdlib.h>
  #include <stdio.h>

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

  char *ft_strdup(char *src)
  {
    int l;
    int i;
    char *ptr;
    if (src == NULL)
      return NULL;
    l = ft_strlen(src);
    ptr = (char *)malloc((l + 1) * sizeof(char));
    if (ptr == NULL)
      return (NULL);
    i = 0;
    while (i < l)
    {
      ptr[i] = src[i];
      i++;
    }
    ptr[i] = '\0';
    return (ptr);
  }

int main() {
    // Test case 1: Simple example
    char original1[] = "hello world";
    char* duplicate1 = ft_strdup(original1);
    printf("Test case 1: Original '%s', Duplicate '%s'\n", original1, duplicate1);
    free(duplicate1);

    // Test case 2: Empty string
    char original2[] = "";
    char* duplicate2 = ft_strdup(original2);
    printf("Test case 2: Original '%s', Duplicate '%s'\n", original2, duplicate2);
    free(duplicate2);

    // Test case 3: Null-terminated string
    char original3[] = "hello\0world";
    char* duplicate3 = ft_strdup(original3);
    printf("Test case 3: Original '%s', Duplicate '%s'\n", original3, duplicate3);
    free(duplicate3);

    // Test case 4: Long string
    char original4[] = "This is a very long string that should be duplicated correctly";
    char* duplicate4 = ft_strdup(original4);
    printf("Test case 4: Original '%s', Duplicate '%s'\n", original4, duplicate4);
    free(duplicate4);

    // Test case 5: Null pointer
    char* original5 = NULL;
    char* duplicate5 = ft_strdup(original5);
    printf("Test case 5: Original '%p', Duplicate '%p'\n", (void*)original5, (void*)duplicate5);
    if (duplicate5 != NULL) {
        free(duplicate5);
    }

    return 0;
}