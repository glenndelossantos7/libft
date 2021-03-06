/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 09:13:28 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/03 15:49:22 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function lexicographically compares between s1 and s2 up to n
** characters or until a '\0' is reached. If the 2 strings are identical, the
** function returns 1, or 0 otherwise.
*/

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
	{
		if (ft_strncmp(s1, s2, n) == 0)
		{
			return (1);
		}
	}
	return (0);
}
