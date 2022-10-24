/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:41:08 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/24 06:03:15 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = ft_strlen(s1) - ft_strlen(set);
	while(ft_strncmp(s1 + i,set,ft_strlen(set)))
		i += ft_strlen(set);
	while (ft_strncmp(s1 + j,set,ft_strlen(set)))
	{
		j -= ft_strlen(set);
	}








}
