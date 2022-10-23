/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:01:26 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/23 05:53:01 by bel-idri         ###   ########.fr       */
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
	size_t ln;


	i = 0;
	count = 0;
	if (!haystack && len == 0)
		return (NULL);
	lh = ft_strlen(haystack);
	ln = ft_strlen(needle);
	if (ft_strlen(needle) > len)
		return (NULL);
	if (needle[i] == '\0')
		return ((char *)&haystack[i]);
	if (haystack[i] == '\0')
		return (0);
	while (i < len)
	{
		j = 0;
		k = i;
		while (needle[j] == haystack[k] && haystack[k] && k < len)
		{
			count++;
			j++;
			k++;
		}
		if (count == ln)
			return ((char *)&haystack[i]);
		count = 0;
		i++;
	}
	return (NULL);
}
// #include<stdio.h>
// #include<string.h>

// int main()
// {
// 	char haystack[10] = "aaabcabcd";
// 	char needle[10] = "abcd";
// 	printf("   strnstr : %s\n", strnstr(haystack,needle,9));
// 	printf("ft_strnstr : %s\n", ft_strnstr(haystack,needle,9));



// 	return 0;
// }
