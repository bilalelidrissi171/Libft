/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:41:08 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/28 09:31:25 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//static void	count_trim();

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	size_t	index_set;
	size_t	count;

	start = 0;
	index_set = 0;
	count = 0;
	if (!set)
		return (ft_strdup(s1));
	if (!s1)
		return (ft_strdup(""));
	while (s1[start])
	{
		while (index_set < ft_strlen(set))
		{
			if (set[index_set] == s1[start])
				count++;
			index_set++;
		}
		if (count >= 1)
		{
			start++;
			index_set = 0;
			count = 0;
		}
		else
			break ;
	}
	index_set = 0;
	len = ft_strlen(s1) - 1;
	while (len - start)
	{
		while (index_set < ft_strlen(set))
		{
			if (set[index_set] == s1[len])
				count++;
			index_set++;
		}
		if (count >= 1)
		{
			len--;
			index_set = 0;
			count = 0;
		}
		else
			break ;
	}
	if (len < start)
		return (ft_strdup(""));
	len = len - start + 1;
	return (ft_substr(s1, start, len));
}
