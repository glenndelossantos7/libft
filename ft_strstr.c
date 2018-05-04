/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 22:30:21 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/04 12:20:09 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function locates the first occurrence of the null-terminated string
** s2 in the null-terminated string s1.
** RETURN: If s2 is an empty string, s1 is returned; if s2 occurs nowhere in
** s1, NULL is returned; otherwise a pointer to the first character of the
** first occurrence of s2 is returned.
*/

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	len = 0;
	while (s2[len])
		len++;
	if (!len)
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		while (s2[j] == s1[i + j])
		{
			if (j == len - 1)
				return ((char *)s1 + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
