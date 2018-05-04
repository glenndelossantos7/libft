/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 16:29:19 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/04 15:18:03 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function applies the function f to each character of the string given
** as argument to create a "fresh" new string (with malloc(3)) resulting from
** successive application of f.
*/

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char			*freshstr;
	char			*scanner;

	if (s == NULL || f == NULL)
		return (NULL);
	freshstr = ft_strdup(s);
	if (freshstr == 0)
		return (0);
	scanner = freshstr;
	while (*s)
	{
		*scanner = f(*s);
		scanner++;
		s++;
	}
	return (freshstr);
}
