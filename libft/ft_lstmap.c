/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgoncal <frgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:11:28 by frgoncal          #+#    #+#             */
/*   Updated: 2021/11/17 12:56:11 by frgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*new;
	t_list	*tmp;

	list = NULL;
	new = NULL;
	if (!lst || !f)
		return (NULL);
	list = lst;
	while (list->next)
	{
		tmp = ft_lstnew(f(list->content));
		if (tmp)
		{
			ft_lstadd_back(&new, tmp);
		}
		else
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		list = list->next;
	}
	ft_lstadd_back(&new, ft_lstnew(f(list->content)));
	return (new);
}
