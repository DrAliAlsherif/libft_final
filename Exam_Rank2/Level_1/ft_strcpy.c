/* Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);
```
*/ 
// #include <stdio.h>

// char	*ft_strcpy(char *s1, char *s2)

// {
// 	int	i;

// 	i = 0;
// 	while (s2[i] != '\0')
// 	{
// 		s1[i] = s2[i];
// 		i++;
// 	}
// 	s1[i] = '\0';
// 	return (s1);
// }

// int	main(void)
// {
// 	char	s2[] = "ali";

// 	char	s1[] = "moham";

// 	printf ("%s\n", s1);
// 	ft_strcpy(s1, s2);
// 	printf("%s", s2);
// }
// int main(void)
// {
//     char src [20]= "mariam";
//     char dest[20] = "lol";
//     printf("%s", ft_strcpy(dest, src));
// }
char    *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
#include <stdio.h>

int main(void)
{
	char src[20] = "ali";
	char dst[20] = "alsherif";

	printf("%s", ft_strcpy(dst, src)); 
}