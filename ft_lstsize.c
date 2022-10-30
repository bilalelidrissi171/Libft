/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:44:43 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/30 20:08:35 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main()
// {
// 	t_list *h;

// 	h = ft_lstnew((char *)"111");
// 	h->next = ft_lstnew((char *)"222");
// 	h->next->next = ft_lstnew((char *)"333");
// 	h->next->next->next = ft_lstnew((char *)"444");

// 	printf("%d\n",ft_lstsize(h));
// }
