/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:44:11 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/30 20:34:08 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void del(void *c)
// {
// 	free((char *)c);
// }

int main()
{
	t_list *h;

	h = ft_lstnew(ft_strdup("1111"));

	printf("|%p|%s|\n",&h,h->content);





	ft_lstdelone(h->next,&free);

	printf("|%p|%s|",&h,h->content);


}
