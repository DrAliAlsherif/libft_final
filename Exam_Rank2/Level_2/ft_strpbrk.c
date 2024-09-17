/* ## Subject

```
Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);
```
*/
#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	
	if (!s1 || !s2)
		return (0);
	while(*s1)
	{
		i = 0;
	   	while(s2[i])
		{
			if(*s1 == s2[i])
				return (char *) s1;
			i++;
		}
		s1++;	
	}
	return (NULL);
}
// int main(void)
// {
//     printf("%s\n", ft_strpbrk("1234d", "dmathi"));
//     printf("%s\n", strpbrk("1234d", "dmathi"));
// }
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

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    while (s1[i])
    {
        if (ft_strchr((char *)s2, s1[i]))
            return ((char *)s1 + i);
        i++;
    }
    return (0);
    
}