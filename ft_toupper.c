/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 07:19:39 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/04 12:09:37 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function converts a lower-case letter to the corresponding upper-
** case letter. The argument must be representable as an unsigned char or
** the value of EOF. It returns the corresponding upper-case letter if there
** is one; otherwise, the argument is returned unchanged.
*/

#include "libft.h"

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
