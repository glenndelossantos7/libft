/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 03:50:57 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/03 15:27:22 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function applies the function f to each character of the string
** passed as argument by giving its index as first argument to create a
** "fresh" new string (with malloc(3)) resulting from the successive
** applications of f.
** It RETURNS the "fresh" string created from the successive applications
** of f.
*/

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*freshstr;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	freshstr = (char *)malloc(sizeof(*freshstr) * len + 1);
	if (freshstr == 0)
		return (NULL);
	while (s[i])
	{
		freshstr[i] = f(i, s[i]);
		i++;
	}
	freshstr[i] = '\0';
	return (freshstr);
}
