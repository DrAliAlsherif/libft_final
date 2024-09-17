/* ## Subject

```
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
```
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}
char    *ft_strdup(char *src)
{
    int i = 0;
    char *str = malloc(sizeof(char) * ft_strlen(src));
    while (src[i])
    {
        str[i] = src[i];
        i++;
    }
    return (str[i] = '\0', str);
}

// int main(void)
// {
//     printf("%s\n", ft_strdup("mariam"));
//     printf("%s", strdup("mariam"));
// }