/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:44:26 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/30 20:13:23 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

// int main()
// {
// 	t_list *h;
// 	h = NULL;

// 	h = ft_lstnew((char *)"111");
// 	h->next = ft_lstnew((char *)"222");
// 	h->next->next = ft_lstnew((char *)"333");
// 	h->next->next->next = ft_lstnew((char *)"444");

// 	t_list *last;
// 	last = ft_lstlast(h);
// 	printf("%s\n",last->content);
// }
