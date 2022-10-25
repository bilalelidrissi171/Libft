/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilal <bilal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 05:26:20 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/25 10:51:50 by bilal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	**ft_alloce(char **s, char c, int *count)
{
	char	**str;
	char	*ss;
	int		i;

	*count = 0;
	i = 0;
	ss = ft_strtrim(*s, &c);
	while (ss[i])
	{
		if (ss[i] == c && ss[i + 1] != c)
			(*count)++;
		i++;
		if (!ss[i])
			*count++;
	}
	// free(*s);
	*s = ss;
	str = (char **)malloc((*count + 1) *sizeof(char *));
	str[*count] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		length;
	int 	counter;
	int		start;
	int		end;
	char	*new_s = ft_strdup(s);
	str = ft_alloce(&new_s, c, &length);

	counter = 0;
	start = 0;
	while (new_s[start])
	{
		end = start;
		while (new_s[end])
		{

			if(new_s[end] != c && (new_s[end + 1] == '\0' || new_s[end + 1] == c))
			{
				str[counter] = ft_substr(s,start, end - start + 1);
				end++;
				while (new_s[end] == c && new_s[end] != '\0')
					end++;
				counter++;
				start = end;
				break;
			}
			end++;
		}
		if(new_s[end] == '\0')
			break;
	}
	return (str);
}

int main()
{
	char *s1 = "   jjj   a  a h s";
	char *s2 = "lsdfljsdfl";
	char *s3 = "         ";
	char *s4 = "    sfsdfd dsf dsf sdf sd fd ";
	char set = ' ';
	char **str = ft_split(s1,set);
	// printf("[%s]\n", str[0]);
	// printf("%s| %s| %s| %s| %s\n", str[0], str[1], str[2], str[3], str[4]);
	printf("|%s|\n", str[1]);

	return 0;
}

