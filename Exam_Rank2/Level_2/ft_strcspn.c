/* ## Subject

```
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);
```
*/
#include <stdio.h>
#include <string.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int     i = 0;
    int     j = 0;

    while (s[i] != '\0')
    {
	j = 0;
        while (reject[j] != '\0')
        {
            if(s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}


int main(void)
{
    printf("%lu\n", ft_strcspn("mariam", "mari"));
    printf("%lu\n", ft_strcspn("iam", "mari"));
    printf("%lu\n", ft_strcspn("maam", "mari"));
    printf("%lu\n", ft_strcspn("abc", "123"));
    
    printf("%lu\n", strcspn("mariam", "mari"));
    printf("%lu\n", strcspn("iam", "mari"));
    printf("%lu\n", strcspn("maam", "mari"));
    printf("%lu\n", ft_strcspn("abc", "123"));
}

// char *ft_strchr(char *str, char search_for)
// {
//     int i = 0;
//     while (str[i])
//     {
//         if (str[i] == search_for)
//             return (str + i);
//         i++;
//     }
//     return (0);
// }

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    while (s[i])
    {
        if (ft_strchr((char *)reject, s[i]) != NULL)
            break ;
        i++;
    }
    return (i);
}