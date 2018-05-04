/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 09:29:54 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/03 15:44:49 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function allocates (with malloc(3)) and returns a copy of the string
** given as arguments without whitespaces at the beginning or at the end of
** the string. Will be considered as whitespace the following characters
** ' ' ',' '\n' and '\t'.
** RETURN: If s has no whitespaces at the beginning or at the end, the
** function returns a copy of s. If the allocation fails the function returns
** NULL.
*/

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*wspacefree;

	if (s == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	wspacefree = (char *)s + ft_strlen(s) - 1;
	while (*wspacefree == ' ' || *wspacefree == '\t' || *wspacefree == '\n')
		wspacefree--;
	return (ft_strsub(s, 0, wspacefree - s + 1));
}
