/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 07:24:58 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/03 15:25:53 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function tests for any printing character, including space. The value
** of the argument must be representable as an unsigned char or the value
** of EOF. It returns zero if the character tests false and returns non-zero
** if the character tests true.
*/

#include "libft.h"

int		ft_isprint(int c)
{
	return (32 <= c && c < 127);
}
