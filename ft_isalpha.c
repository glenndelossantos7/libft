/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 07:41:58 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/03 15:53:51 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function tests for any character for which isupper(3) or islower(3)
** is true. The value of the argument must be representable as an unsigned
** char or the value of EOF. It returns zero if the character tests false
** and returns non-zero if the character tests true.
*/

#include "libft.h"

int		ft_isalpha(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}
