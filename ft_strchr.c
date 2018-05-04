/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 22:14:52 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/04 12:32:02 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function located the first occurrnce of c (converted to a char) in
** the string pointed to by s. The terminating NULL character is considered
** to be part of the string; therefore if c is '\0', this function locates
** the terminating '\0'.
** It RETURNS a pointer to the located character, or NULL if the character
** does not appear in the string.
*/

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s != (char)c)
		return (NULL);
	else
		return ((char *)s);
}
