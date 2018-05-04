/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 15:12:42 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/04 15:51:36 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function applies function f to each character of the string passed as
** argument. Each character is passed by address to f to be modified if
** necessary.
*/

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
		while (*s)
			f(s++);
}
