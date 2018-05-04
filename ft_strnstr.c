/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 22:50:42 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/04 12:01:53 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function locates the first occurrence of the null-terminated string
** s2 in the null-terminated string s1, where not more than n characters are
** searched.
** RETURN: If s2 is an empty string, s1 is returned; if s2 occurs nowhere is
** s1, NULL is returned; otherwise a pointer to the first character of the
** first occurrence fo s2 is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*haystack;
	size_t	countdown;
	size_t	s2_len;

	haystack = (char *)s1;
	if (s2[0] == '\0')
		return (haystack);
	countdown = n;
	s2_len = (size_t)ft_strlen(s2);
	while (*haystack && countdown >= s2_len)
	{
		if (*haystack == *s2)
		{
			if (ft_strncmp(s2, haystack, s2_len) == 0)
				return (haystack);
		}
		countdown--;
		haystack++;
	}
	return (NULL);
}
