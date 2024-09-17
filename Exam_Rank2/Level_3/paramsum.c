/* ## Subject

```
Assignment name  : paramsum
Expected files   : paramsum.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the number of arguments passed to it, followed by
a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>
```
*/
#include <unistd.h>

// void putnum(int i)
// {
//     if (i > 9)
//         putnum(i / 10);
//     write(1, &"0123456789"[i % 10], 1);
// }

// int main(int ac, char **av)
// {
//     (void)av;
//     putnum(ac - 1);
//     write(1, "\n", 1);
// }


void putnum(int nb)
{
    if (nb > 9)
    putnum(nb / 10);
    write(1, &"0123456789"[nb % 10], 1);
}

int main(int ac, char **av)
{
    (void)av;
    putnum(ac - 1);
    write(1, "\n", 1);
}