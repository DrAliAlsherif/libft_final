/* ## Subject

```
Assignment name  : ft_list_foreach
Expected files   : ft_list_foreach.c, ft_list.h
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a list and a function pointer, and applies this
function to each element of the list.

It must be declared as follows:

void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

The function pointed to by f will be used as follows:

(*f)(list_ptr->data);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
```
*/
#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

// void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
// {
//     while (begin_list)
//     {
//         (*f)(begin_list->data);
//         begin_list = begin_list->next;
//     }

// }

// t_list *lstnew(void *content)
// {
//     t_list *node = malloc(sizeof(t_list));
//     node->data = content;
//     node->next = NULL;
//     return (node);
// }

// void ft_function(void *content)
// {
//     int i = 0;
//     char *con = (char *)content;
//     while(con[i])
//     {
//         con[i] = 'a';
//         i++;
//     }
// }
// #include <string.h>
// int main(void)
// {
//     t_list *node = lstnew(strdup("mariam"));
//     node->next = lstnew(strdup("ko"));
//     node->next->next = lstnew(strdup("lkjhgh"));

//     ft_list_foreach(node, ft_function);
//     t_list *tmp = node;
//     while (tmp)
//     {
//         printf("%s\n", (char *)tmp->data);
//         tmp = tmp->next;
//     } 
// }
void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list)
    {
        (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}
