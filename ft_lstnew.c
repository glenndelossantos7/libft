/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 21:02:17 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/04 12:08:28 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function allocates (with malloc(3))
** and RETURNS a "fresh" link. The variables content and content_size of the
** new link are initialized by copy of the parameters of the function. If the
** parameter content is null, the variable content is initialized to NULL and
** the variable content_size is initialized to 0 even if the parameter
** content_size isn't. The variable next is initialized to NULL. If the
** allocation fails, the function returns NULL.
*/

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*freshlnk;

	freshlnk = malloc(sizeof(t_list));
	if (freshlnk == NULL)
		return (NULL);
	if (content == NULL)
	{
		freshlnk->content = NULL;
		freshlnk->content_size = 0;
	}
	else
	{
		freshlnk->content = ft_memalloc(content_size);
		if (freshlnk->content == NULL)
		{
			free(freshlnk);
			return (NULL);
		}
		ft_memcpy(freshlnk->content, content, content_size);
		freshlnk->content_size = content_size;
	}
	freshlnk->next = NULL;
	return (freshlnk);
}
