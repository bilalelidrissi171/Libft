/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 05:26:20 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/26 04:08:12 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		count_words(char const *s, char c)
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
		index++;
	}

	if(s[index - 1] != c)
		counter++;

	return (counter);
}
char	**ft_split(char const *s, char c)
{
	char	**str;

	


	return(0);
}

// int main()
// {
// 	char *s1 = "   jjj   a  ac h s";
// 	char *s2 = "lsdfljsdfl";
// 	char *s3 = "         ";
// 	char *s4 = "    sfsdfd dsf dsf sdf sd fd ";
// 	char *s5 = "a";
// 	char *s6 = "a k";
// 	char *s7 = "";



// 	char set = ' ';
// 	char **str = ft_split(s7,set);
// 	// printf("[%s]\n", str[0]);
// 	// printf("%s| %s| %s| %s| %s\n", str[0], str[1], str[2], str[3], str[4]);
// 	//printf("|%s|\n", str[1]);

// 	return 0;
// }

