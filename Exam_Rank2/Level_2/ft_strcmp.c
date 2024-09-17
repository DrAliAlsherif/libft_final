/* ## Subject

```
Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);
```
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
// int main(void)
// {
// 	char s1[] = "1";
// 	char s2[] = "2";
//     printf("%d\n", ft_strcmp(s1, s2));
//     printf("%d", strcmp(s1, s2));
// }
// int main(void)
// {
// 	char s1[] = "helpoooo";
// 	char s2[] = "hellooooo";
// 	printf("%d\n", ft_strcmp(s1, s2));
//     printf("%d\n", strcmp(s1, s2));
// 	return (0);
// }