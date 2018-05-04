/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 07:35:48 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/04 12:00:06 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function tests for an ASCII character, which is any character between
** 0 and octal 0177 inclusive.
*/

#include "libft.h"

int		ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}
