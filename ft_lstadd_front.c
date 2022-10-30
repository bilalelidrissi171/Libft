/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:43:56 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/30 20:15:42 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (lst)
		new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	t_list *h;

// 	h = NULL;

// 	h = ft_lstnew((char *)"bilal");
// 	h->next = ft_lstnew((char *)"jjj");
// 	h->next->next = ft_lstnew((char *)"aaa");

// 	t_list *n;

// 	n = NULL;

// 	n = ft_lstnew((char *)"jdid");

// 	ft_lstadd_front(&h,n);


// 	while (h)
// 	{
// 		printf("%s->",h->content);
// 		h = h->next;
// 	}
// }

