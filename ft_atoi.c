/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 00:24:45 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/03 15:38:03 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function converts the initial portion of the string pointed to by str
** to int representation.
*/

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		l;
	long	n;

	i = 0;
	l = 0;
	n = 0;
	while (ft_isspace(str, i) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
		l = i++;
	while (str[i])
	{
		if (n >= 922337203685477580 && (((str[i] - '0') > 8 && str[l] == '-')
			|| ((str[i] - '0') > 7 && str[l] != '-')))
			return (str[l] == '-' ? 0 : -1);
		if (str[i] >= '0' && str[i] <= '9')
			n = n * 10 + (str[i] - '0');
		else if (!(str[i] >= '0' && str[i] <= '9'))
			break ;
		i++;
	}
	return (str[l] == '-' ? (n * -1) : n);
}
