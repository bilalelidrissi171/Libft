/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 05:26:20 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/25 05:40:15 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int	i;
	int	c;
	char **str;

	i = 0;
	c = 0;

	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
			c++;
		i++;
	}
}

int main()
{
	char **s = ft_split("  hh jjj   a  a ",' ');
	return 0;
}

