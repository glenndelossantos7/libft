/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 12:21:00 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/03 15:24:43 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function takes as a parameter the address of a pointer to a link and
** frees the memory of this link and every successors of that link using the
** functions del and free(3). Finally the pointer to the link that was just
** freed must be set to NULL (quiet similar to the function ft_memdel from
** the mandatory part).
*/

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (alst && *alst && del)
	{
		while (*alst)
		{
			del((*alst)->content, (*alst)->content_size);
			free(*alst);
			*alst = (*alst)->next;
		}
		*alst = NULL;
	}
}
