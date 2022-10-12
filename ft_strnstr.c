/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:01:26 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/12 17:02:22 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t count;
	size_t lh;


	i = 0;
	count = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (!haystack && len == 0)
		return (NULL);
	lh = ft_strlen(haystack);
	if (ft_strlen(needle) > len)
		return (NULL);
	while (i < len - 1 && i < lh)
	{
		j = 0;
		k = i;
		while (needle[j] == haystack[k] && len && needle[j] && haystack[k])
		{
			count++;
			j++;
			k++;
			len--;
		}
		if (count == ft_strlen(needle))
			return ((char *)&haystack[i]);
		count = 0;
		i++;

	}
	return (NULL);
}
