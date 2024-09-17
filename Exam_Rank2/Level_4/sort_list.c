/* ## Subject

```
Assignment name  : sort_list
Expected files   : sort_list.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following functions:

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

This function must sort the list given as a parameter, using the function
pointer cmp to select the order to apply, and returns a pointer to the
first element of the sorted list.

Duplications must remain.

Inputs will always be consistent.

You must use the type t_list described in the file list.h
that is provided to you. You must include that file
(#include "list.h"), but you must not turn it in. We will use our own
to compile your assignment.

Functions passed as cmp will always return a value different from
0 if a and b are in the right order, 0 otherwise.

For example, the following function used as cmp will sort the list
in ascending order:

int ascending(int a, int b)
{
	return (a <= b);
}
```
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    int             content;
    struct s_list   *next;
}                   t_list;
                                                                                                                                                                                                                                                                                             
// t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
// {
//     t_list *start = lst;
//     int tmp;
//     while (lst && lst->next)
//     {
//         if ((*cmp)(lst->content, lst->next->content) == 0)
//         {
//             tmp = lst->content;
//             lst->content = lst->next->content;
//             lst->next->content = tmp;
//             lst = start;
//         }
//         else
//             lst = lst->next;
//     }
//     return (start);
// }

// int ascending(int a, int b)
// {
// 	return (a <= b);
// }

// t_list *lstnew(int content)
// {
//     t_list *node = malloc(sizeof(t_list));
//     node->content = content;
//     node->next = NULL;
//     return (node);
// }

// int main(void)
// {
//     t_list *node = lstnew(2);
//     node->next = lstnew(1);
//     node->next->next = lstnew(4);

//     node = sort_list(node, ascending);
//     t_list *tmp = node;
//     while (tmp)
//     {
//         printf("%d\n", tmp->content);
//         tmp = tmp->next;
//     }
// }
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *start = lst;
    int tmp;

    while (lst && lst->next)
    {
        if ((*cmp)(lst->content, lst->next->content) == 0)
        {
            tmp = lst->content;
            lst->content = lst->next->content;
            lst->next->content = tmp;
            lst = start;
        }
        else
        lst = lst->next;
    }
    return (start);
}
int ascending(int a, int b)
{
	return (a <= b);
}

t_list *lstnew(int content)
{
    t_list *node = malloc(sizeof(t_list));
    node->content = content;
    node->next = NULL;
    return (node);
}

int main(void)
{
    t_list *node = lstnew(2);
    node->next = lstnew(1);
    node->next->next = lstnew(4);

    node = sort_list(node, ascending);
    t_list *tmp = node;
    while (tmp)
    {
        printf("%d\n", tmp->content);
        tmp = tmp->next;
    }
}