/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:44:43 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/29 13:10:53 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*tmp;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

#include <stdio.h>

int main()
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = "content";
	new->next = NULL;


	int i = ft_lstsize(new);
	printf("%d\n",i);
	return 0;
}
