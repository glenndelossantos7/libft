/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 07:44:54 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/04 12:20:52 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function tests for a decimal digit character. It returns zero if the
** character tests false and returns non-zero if the character tests true.
*/

#include "libft.h"

int		ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}
