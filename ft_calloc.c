/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilal <bilal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 09:55:41 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/24 03:42:27 by bilal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_memset(p,0,count * size);
	return (p);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	size_t b = 0;
	size_t i = 1;
	size_t c = 1073741824;
	size_t s = sizeof(char);
	while (calloc(c * s))
	{
		// memset(ss,1,(c * s));
		printf("%zu Gb\n",i++);

	}
//hadi khbar zina


	return 0;
}
