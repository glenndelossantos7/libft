/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 09:23:37 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/03 15:47:33 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function allocates (with malloc(3))
** and RETURNS a "fresh" string ending with '\0', result of the concatenation
** of s1 and s2. If the allocation fails the function returns NULL.
*/

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*freshstr;
	size_t	s1_len;
	size_t	s2_len;

	if ((s1 == 0) || (s2 == 0))
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	freshstr = ft_strnew(s1_len + s2_len);
	if (freshstr == 0)
		return (NULL);
	freshstr = ft_strcpy(freshstr, s1);
	freshstr = ft_strcat(freshstr, s2);
	return (freshstr);
}
