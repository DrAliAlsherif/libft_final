/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aali2 <aali2@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 04:35:18 by aali2             #+#    #+#             */
/*   Updated: 2024/07/21 20:49:34 by aali2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The function ft_itoa converts the integer n into a string of characters.

	RESULT VALUE :
	The string of the converted integer.
*/
#include "libft.h"

static	int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	int		sign;
	char	*result;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	sign = 1;
	count = ft_count(n);
	result = malloc(sizeof(char) * (count + 1));
	if (!result)
		return (NULL);
	result[count] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	while (count-- > 0 && n > 0)
	{
		result[count] = (n % 10) + '0';
		n /= 10;
	}
	return (result);
}
