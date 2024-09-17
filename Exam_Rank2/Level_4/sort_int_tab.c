/* ## Subject

```
Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent.
```
*/

// void sort_int_tab(int *tab, unsigned int size)
// {
//     int i = 0;
//     int tmp;
//     while ((size - 1) > i)
//     {
//         if (tab[i] > tab [i + 1])
//         {
//             tmp = tab[i];
//             tab[i] = tab[i + 1];
//             tab[i + 1] = tmp;
//            i = 0;
//         }
//         else
//             i++;
//     }
// }
// #include <stdio.h>

// int main(void)
// {
//     int tab[] = {1, 8, 77, 68, 42, 16, 2, 6};
//     sort_int_tab(tab, 8);
//     int i = 0;
//     while (i < 8)
//     {
//         printf("%d\n", tab[i]);
//         i++;
//     }
// }
void sort_int_tab(int *tab, unsigned int size)
{
    int i;
    int tmp;

    while ((size - 1) > i)
    {
        if (tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = 0;
        }
        else
        i++;
    }
}
#include <stdio.h>

int main(void)
{
    int tab[] = {1, 8, 77, 68, 42, 16, 2, 6};
    sort_int_tab(tab, 8);
    int i = 0;
    while (i < 8)
    {
        printf("%d\n", tab[i]);
        i++;
    }
}