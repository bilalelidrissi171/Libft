/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:48:25 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/09 18:00:59 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = ft_strlen(dst);
	if (dstsize == 0)
		return (ft_strlen(src));
	while ((dstsize - y - x - 1) && src[x])
	{
		dst[y] = src[x];
		x++;
		y++;
	}
	dst[y] = '\0';
	return (ft_strlen(src));
}
