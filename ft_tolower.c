/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 07:12:11 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/03 15:52:34 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function converts an upper-case letter to the corresponding lower-case
** letter. The argument must be representable as an unsigned char or the
** the value of EOF. It returns the corresponding lower-case letter if there
** is one; otherwise, the argument is returned unchanged.
*/

#include "libft.h"

int		ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
