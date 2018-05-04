/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 12:09:17 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/04 12:10:57 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function takes as a parameter a link's pointer address and frees the
** memory of the link's content using the function del given as a parameter,
** then frees the link's memory using free(3). The memory of next must not be
** freed under any circumstance. Finally, the pointer to the link was just
** freed must be set to NULL (quiet similar to the function ft_memdel in the
** mandatory part).
*/

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst || !del)
		return ;
	if (alst && *alst)
	{
		if (del)
		{
			del((*alst)->content, (*alst)->content_size);
			free(*alst);
			*alst = NULL;
		}
	}
}
