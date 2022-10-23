/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:41:40 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/23 03:55:32 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	i=0;
	if (n == 0)
		return (0);
	if(!s1[i] || !s2[i])
			return((unsigned char)s1[i] - (unsigned char)s2[i]);
	while((s1[i] || s2[i]) && i < n)
	{
		if(s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return(0);
}

// int main()
// {
//         /* 1 */ check(ft_strncmp("t", "", 0) == 0); showLeaks();
//         /* 2 */ check(ft_strncmp("1234", "1235", 3) == 0); showLeaks();
//         /* 3 */ check(ft_strncmp("1234", "1235", 4) < 0); showLeaks();
//         /* 4 */ check(ft_strncmp("1234", "1235", -1) < 0); showLeaks();
//         /* 5 */ check(ft_strncmp("", "", 42) == 0); showLeaks();
//         /* 6 */ check(ft_strncmp("Tripouille", "Tripouille", 42) == 0); showLeaks();
//         /* 7 */ check(ft_strncmp("Tripouille", "tripouille", 42) < 0); showLeaks();
//         /* 8 */ check(ft_strncmp("Tripouille", "TriPouille", 42) > 0); showLeaks();
//         /* 9 */ check(ft_strncmp("Tripouille", "TripouillE", 42) > 0); showLeaks();
//         /* 10 */check(ft_strncmp("Tripouille", "TripouilleX", 42) < 0); showLeaks();
//         /* 11 */check(ft_strncmp("Tripouille", "Tripouill", 42) > 0); showLeaks();
//         /* 12 */check(ft_strncmp("", "1", 0) == 0); showLeaks();
//         /* 13 */check(ft_strncmp("1", "", 0) == 0); showLeaks();
//         /* 14 */check(ft_strncmp("", "1", 1) < 0); showLeaks();
//         /* 15 */check(ft_strncmp("1", "", 1) > 0); showLeaks();
//         /* 16 */check(ft_strncmp("", "", 1) == 0); showLeaks();
//         write(1, "\n", 1);
//         return (0);

// }

