/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 05:26:20 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/28 10:17:18 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	index;
	int	counter;

	index = 0;
	counter = 0;
	while (s[index] == c)
		index++;
	while (s[index])
	{
		if (s[index] == c)
		{
			counter++;
			while (s[index] == c)
				index++;
		}
		else
			index++;
	}
	if (s[index - 1] != c)
		counter++;
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		index;
	int		start;
	int		end;

	index = 0;
	end = 0;
	start = 0;
	if (!s)
		return (NULL);
	str = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (index < count_words(s, c) && s[start])
	{
		start = end;
		while (s[start] && s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		str[index++] = ft_substr(s, start, end - start);
	}
	str[index] = NULL;
	return (str);
}
