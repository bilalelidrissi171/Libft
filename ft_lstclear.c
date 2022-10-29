/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:44:05 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/29 22:32:05 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!*lst)
		return ;

	t_list *l;
	l = *lst;
	while (l)
	{
		ft_lstdelone(l,del);
		l = l->next;
	}
}
