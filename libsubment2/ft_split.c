/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aali2 <aali2@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 08:32:57 by aali2             #+#    #+#             */
/*   Updated: 2024/07/22 14:36:37 by aali2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The function ft_split allocates and copies an array of strings by 
	splitting the given string s using the given separator c.

	RETURN VALUE :
	An array of strings resulting from the split. NULL if the memory
	allocation fails.
*/
#include "libft.h"

static void	ft_free_array(char **array)
{
	int	i;

	if (!array)
		return ;
	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static int	ft_partnum(const char *str, char c)
{
	int		num;
	int		i;

	i = 0;
	num = 0;
	while (str[i])
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
		{
			num++;
		}
		i++;
	}
	return (num);
}

static	char	*ft_get_word(const char **s, char c)
{
	size_t	word_len;
	char	*word;

	while (**s == c && **s)
		(*s)++;
	if (!**s)
		return (NULL);
	if (!ft_strchr(*s, c))
		word_len = ft_strlen(*s);
	else
		word_len = ft_strchr(*s, c) - *s;
	word = ft_substr(*s, 0, word_len);
	*s += word_len;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*word;
	int		i;
	int		parts;

	if (!s)
		return (NULL);
	parts = ft_partnum(s, c);
	arr = (char **)malloc((parts + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	word = ft_get_word(&s, c);
	while (word != NULL)
	{
		arr[i] = word;
		if (!arr[i])
		{
			ft_free_array(arr);
			return (NULL);
		}
		i++;
		word = ft_get_word(&s, c);
	}
	return (arr[i] = NULL, arr);
}
