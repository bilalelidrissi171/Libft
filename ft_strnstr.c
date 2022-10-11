/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:01:26 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/11 19:42:48 by bel-idri         ###   ########.fr       */
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

// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	const char *s1 = "abcdefgh";
// 	const char *s2 = "cd";
// 	printf("%s\n",ft_strnstr(s1,s2,2));
// 	printf("%s",strnstr(s1,s2,2));

// 	return (0);
// }
