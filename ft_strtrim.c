/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:41:08 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/24 23:25:08 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	size_t			j;
	char			*str;


	return (ft_substr(s1,i,j));
}

// #include <stdio.h>


// int main()
// {
// 	char *s = ft_strtrim("bbab0a123456789ababa","ab");
// 	printf("%s",s);
// }
