/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:43:38 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/30 20:16:37 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l;

	if (!lst)
		return ;
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

// int main()
// {
// 	t_list *h;
// 	h = NULL;

// 	h = ft_lstnew((char *)"111");
// 	h->next = ft_lstnew((char *)"222");
// 	h->next->next = ft_lstnew((char *)"333");
// 	h->next->next->next = ft_lstnew((char *)"444");

// 	t_list *node;
// 	node = ft_lstnew((char *)"555");

// 	ft_lstadd_back(&h,node);
// 	while (h)
// 	{
// 		printf("%s->",h->content);
// 		h = h->next;
// 	}
// }
