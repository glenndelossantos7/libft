/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 14:24:17 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/04 11:56:39 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function allocates (with malloc(3)) and returns a "fresh" memory area.
** The memory allocated is initialized to 0. If the allocation fails, the
** function returns NULL.
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*freshmem;

	freshmem = malloc(size);
	if (freshmem == NULL)
		return (NULL);
	else
		ft_bzero(freshmem, size);
	return (freshmem);
}
