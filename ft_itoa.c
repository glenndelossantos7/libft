/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 09:51:14 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/04 14:42:08 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function allocates (with malloc(3))
** and RETURNS a "fresh" string ending with '\0' representing the integer n
** given as argument. Negative numbers must be supported. If the allocation
** fails, the function returns NULL.
*/

#include "libft.h"

static size_t	ft_count_digits(int n)
{
	size_t	counter;

	counter = 1;
	while (n /= 10)
		counter++;
	return (counter);
}

char			*ft_itoa(int n)
{
	char			*freshstr;
	size_t			len;
	unsigned int	sign;

	len = ft_count_digits(n);
	sign = n;
	if (n < 0)
	{
		sign = -n;
		len++;
	}
	if (!(freshstr = ft_strnew(len)))
		return (NULL);
	freshstr[--len] = sign % 10 + 48;
	while (sign /= 10)
		freshstr[--len] = sign % 10 + 48;
	if (n < 0)
		*(freshstr + 0) = '-';
	return (freshstr);
}
