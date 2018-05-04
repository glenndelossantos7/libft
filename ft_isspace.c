/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 16:46:09 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/04 12:26:40 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function checks if the value of the character being pointed to is a
** space.
** RETURN: If the character is indeed a space, the function returns 1 or 0
** otherwise.
*/

int		ft_isspace(const char *str, int i)
{
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' || str[i] == '\v' ||
		str[i] == '\r' || str[i] == '\n')
		return (1);
	else
		return (0);
}
