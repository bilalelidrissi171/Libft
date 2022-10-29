/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 08:42:44 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/29 09:30:01 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	index;
	int	counter;

	index = 0;
	counter = 0;
	if (ft_strlen(s) == 0)
		return (0);
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

static void	ft_free(char **str, int index)
{
	while (index >= 0)
		free(str[index--]);
	free(str);
}

static char	**ft_my_split(char const *s, char c, int index, int start, int end)
{
	char	**str;

	str = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (index < ft_count_words(s, c) && s[start])
	{
		start = end;
		while (s[start] && s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		str[index] = ft_substr(s, start, end - start);
		if (!str[index])
		{
			if (index == 0)
				free(str);
			else
				ft_free(str, index);
			return(str);
		}
		index++;
	}
	str[index] = NULL;
	return (str);
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
	str = ft_my_split(s, c, index, start, end);
	if (!str)
		return (NULL);
	return (str);
}

// int main()
// {
// 	char **s = ft_split("hello!",' ');
// 	printf("|%s|%s|\n",s[0],s[1]);
// }
