/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:24:57 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/12 18:47:28 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	(void)n;
	char	*a;
	a = (char *)s;
	while (n)
	{
		if (*a == (unsigned char)c)
			return (a);
		a++;
		n--;
	}
	return (NULL);
}
