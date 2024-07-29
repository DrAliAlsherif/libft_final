/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aali2 <aali2@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 03:10:40 by aali2             #+#    #+#             */
/*   Updated: 2024/07/21 22:05:09 by aali2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The function ft_lstmap creates a new list from a given list  by 
	applying the function passed as parameter to the original list. If
	the memory allocation fails for any node in the new list, the new list
	will be deleted with the function passed as parameter and its memory
	will be freed.

	RETURN VALUE :
	The new list containing the new values if a functon was provided.
	A new copy of the list if no function was provided.
	NULL if the memory allocation failed.
*/
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;
	void	*tmp;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	node = NULL;
	new = NULL;
	while (lst != NULL)
	{
		tmp = f(lst->content);
		node = ft_lstnew(tmp);
		if (node == NULL)
		{
			del(tmp);
			ft_lstclear(&new, del);
			return (new);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}
