/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:44:32 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/30 11:14:23 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	l = NULL;
	while (lst)
	{
		f(lst->content);
		node = ft_lstnew(lst->content);
		if (!node)
		{
			ft_lstclear(&l, del);
			break ;
		}
		ft_lstadd_back(&l, node);
		lst = lst->next;
	}
	return (l);
}
