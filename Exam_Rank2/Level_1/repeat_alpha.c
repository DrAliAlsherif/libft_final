/* ## Subject

```
Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
```
*/
// #include <unistd.h>

// int main(int ac, char **av)
// {
//     int x = 0;
//     int y = 0;

//     if (ac == 2)
//     {
//         while (av[1][x])
//         {
//             if (av[1][x] >= 'a' && av[1][x] <= 'z')
//             y += av[1][x] + 96;
//             else if (av[1][x] >= 'A' && av[1][x] <= 'Z')
//             y += av[1][x] - 64;
//             else
//             y = 1;
//             while (y)
//             {
//                 write(1, &av[1][x], 1);
//                 y--;
//             }
//             x++;
//         }
//     }
//     write(1, "\n", 1);
//     return (0);
// }
#include <unistd.h>

int main(int ac, char **av)
{
    int x;
    int y;

    if (ac == 2)
    {
        while (av[1][x])
        {
            if (av[1][x] >= 'a' && av[1][x] <= 'z')
            y += av[1][x] - 96;
            else if (av[1][x] >= 'A' && av[1][x] <= 'Z')
            y += av[1][x] - 64;
            else
            y = 1;
            while (y)
            {
                write(1, &av[1][x], 1);
                y--;
            }
            x++;
        }
    }
    write(1, "\n", 1);
    return (0);
}