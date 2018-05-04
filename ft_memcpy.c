/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 02:42:33 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/04 12:28:13 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function copies n bytes from memory area src to memory area dst.
** If dst and src overlap, behavior is undefined. It returns the original
** value of dst.
*/

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*storage;
	unsigned char	*strsrc;
	size_t			i;

	i = 0;
	storage = (unsigned char *)dst;
	strsrc = (unsigned char *)src;
	while (i < n)
	{
		storage[i] = strsrc[i];
		i++;
	}
	return (dst);
}
