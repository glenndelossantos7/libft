/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 16:07:01 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/05/04 12:24:24 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function iterates a list 1st and applies the function f to each link
** to create a "fresh" list (using malloc(3)) resulting from the successive
** applications of f. If the allocation fails, the function returns NULL.
*/

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*freshlst;
	t_list	*wand;

	if ((lst == NULL) || (f == NULL))
		return (NULL);
	wand = f(lst);
	freshlst = wand;
	lst = lst->next;
	while (lst)
	{
		wand->next = f(lst);
		wand = wand->next;
		lst = lst->next;
	}
	return (freshlst);
}
