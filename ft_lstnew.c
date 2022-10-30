/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 10:17:18 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/30 19:32:23 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int main()
// {
// 	t_list *h;

// 	h = NULL;

// 	h = ft_lstnew((char *)"bilal");
// 	h->next = ft_lstnew((char *)"jjj");
// 	h->next->next = ft_lstnew((char *)"aaa");


// 	while (h)
// 	{
// 		printf("%s->",h->content);
// 		h = h->next;
// 	}
// }
