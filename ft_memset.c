/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 20:22:50 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/03 15:55:47 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function writes len bytes of value c (converted to an unsigned char)
** to the string b.
*/

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	unsigned char *d;

	d = (unsigned char *)b;
	if (len == 0)
		return (b);
	while (len)
	{
		*d = (unsigned char)c;
		d++;
		len--;
	}
	return (b);
}
