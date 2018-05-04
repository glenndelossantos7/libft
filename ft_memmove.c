/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 04:28:34 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/04 12:27:37 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function copies len bytes from string src to string dst. The two
** strings may overlap; the copy is always done in a non-destructive manner.
** It returns the original value of dst.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*storage;
	char	*strsrc;
	int		i;

	storage = (char *)dst;
	strsrc = (char *)src;
	i = (int)len - 1;
	if (storage > strsrc)
	{
		while (i >= 0)
		{
			storage[i] = strsrc[i];
			i--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
