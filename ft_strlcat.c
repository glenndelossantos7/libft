/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 21:42:10 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/04 12:31:40 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function copies and concatenate strings respectively. It is designed
** to be safer, more consistent, and less error prone replacement for
** strncpy(3) and strncat(3). Unlike those functions, this function takes the
** full size of the buffer (not just the length) and guarantee to NULL-
** terminate the result (as long as size is larger than 0 or, in the case
** of strlcat(), as long as there is at least one byte free in dst). Also
** note that strlcpy() and strlcat() both src and dst only operate on true "C"
** strings. This means that for strlcat() both src and dst must be NULL-
** terminated. The strlcat() appends the NULL-terminated string src to the end
** of dst. It will append most size - strlen(dst) - 1 byte, NULL-terminating
** the result. The source and destination strings should not overlap, as the
** behavior is undefined.
** It RETURNS the total length of the string
** they tried to create. For strlcat() that means the initial length of dst
** plus the length fo src. If it traverses size characters without finding
** NULL, the length of the string is considered to be size and the destination
** string will not be NULL-terminated (since there was no space for the NULL).
** This keeps strlcat() from running off to the end of the string.
*/

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while ((src[j]) && ((i + j + 1) < size))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
