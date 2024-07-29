/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aali2 <aali2@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 02:30:04 by aali2             #+#    #+#             */
/*   Updated: 2024/07/21 20:50:20 by aali2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The function ft_lstadd_back adds a new node to the back of a list:
		[.]->[.]->[.]->[NEW]->[NULL]

	RETURN VALUE :
	None.
*/
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list_back;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	list_back = ft_lstlast(*lst);
	list_back->next = new;
}
