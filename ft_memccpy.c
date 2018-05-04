/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 03:15:29 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/04 12:17:26 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function copies bytes from string src to string dst. If the
** character c (as converted to an unsigned char) occurs in the string src,
** the copy stops and a pointer to the byte after the copy of c in the string
** dst is returned. Otherwise, n bytes are copied, and a NULL pointer
** is returned.
*/

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*storage;
	unsigned char	*strsrc;
	size_t			i;

	storage = (unsigned char *)dst;
	strsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		storage[i] = strsrc[i];
		if (strsrc[i] == (unsigned char)c)
			return (storage + i + 1);
		i++;
	}
	return (NULL);
}
