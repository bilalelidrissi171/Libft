/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 09:55:41 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/24 03:15:35 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}

#include <stdio.h>
int main()
{

	size_t i = 1;
	size_t c = 1073741824;
	size_t s = sizeof(char);
	while (1)
	{
		char *ss= malloc(c * s);
		if (ss == NULL)
		{
			printf("Fin");
			return 0;
		}
		memset(ss,1,(c * s));
		printf("%zu Gb\n",i++);

	}



	return 0;
}
