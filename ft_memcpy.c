/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:19:44 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/12 13:38:03 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	size_t	i;
	char	*x;

	x = (char *)src;
	i = 0;
	while (i < n)
	{
		ft_memset(dst + i,x[i],1);
		i++;
	}
	return (dst);
}
