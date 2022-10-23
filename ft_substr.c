/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:19:06 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/23 11:39:55 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		str = (char *)ft_calloc(1, sizeof(char));
		return (str);
	}
	i = 0;
	str = (char *)ft_calloc((len + 1) , sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
		str[i++] = s[start++];
	return (str);
}
