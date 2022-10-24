/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 09:55:41 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/24 04:24:41 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*p;

	i = -1;
	if ((size > i / count && count))
		return (NULL);
	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p,count * size);
	return (p);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>


// int main()
// {
// 	size_t b = 0;
// 	size_t i = 1;
// 	size_t c = 1073741824;
// 	size_t s = sizeof(char);
// 	while (memset(calloc(c , s),1,(c * s)))
// 	{
// 		;
// 		printf("%zu Gb\n",i++);

// 	}
// //hadi khbar zina


// 	return 0;
// }
