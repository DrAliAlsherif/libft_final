/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aali2 <aali2@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:08:18 by aali2             #+#    #+#             */
/*   Updated: 2024/07/22 14:39:24 by aali2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESRIPTION :
	The function ft_strmapi applies the given function f to each character
	in the given string s and allocates sufficient memory to store the
	resulting new string. 

	RETURN VALUE :
	A pointer to the newly created string. NULL if the memory allocation
	fails.	
*/
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new;

	new = malloc(ft_strlen(s) + 1 * sizeof(char));
	if (new == 0)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	new[i] = 0;
	return (new);
}
