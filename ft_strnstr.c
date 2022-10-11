/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:01:26 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/11 17:41:40 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	i = 0;
	if (needle == NULL)
		return ((char *)haystack);
	while(haystack[i])
	{
		if(ft_strncmp(haystack + i,needle,len - 1) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return(NULL);
}

#include <stdio.h>
int	main()
{
	char *s1 = "abcdefgh";
	char *s2 = "cderr";
	printf("%s",ft_strnstr(s1,s2,3));
	return (0);
}
