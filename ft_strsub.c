/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 09:16:22 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/04 11:58:10 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function allocates (with malloc(3)) and returns a "fresh" substring
** from the string given as argument. The substring begins at indexstart and
** is of size len. If start len aren't refering to a valid substring,
** the behavior is undefined.
** RETURN: If the allocation fails, the function returns NULL.
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*freshstr;

	i = 0;
	freshstr = (char *)malloc(sizeof(*freshstr) * len + 1);
	if ((freshstr == 0) || (s == 0))
		return (NULL);
	while (s[start] && len)
	{
		freshstr[i] = s[start];
		start++;
		i++;
		len--;
	}
	freshstr[i] = '\0';
	return (freshstr);
}
