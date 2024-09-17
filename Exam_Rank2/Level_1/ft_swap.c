/* ## Subject

```
Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b);
```
*/

void	ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

// #include <stdio.h>
// int main(void)
// {
//     int i = 1;
//     int j = 5;
//     ft_swap(&i, &j);
//     printf("%d, %d", i, j);
// }