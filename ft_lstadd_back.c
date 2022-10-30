/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:43:38 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/30 07:00:29 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *l;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	l = ft_lstlast(*lst);
	l->next = new;
}
