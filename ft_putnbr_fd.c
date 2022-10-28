/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-idri <bel-idri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:22:57 by bel-idri          #+#    #+#             */
/*   Updated: 2022/10/28 07:55:03 by bel-idri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
void	ft_putnbr_fd(int n, int fd)
{
	int	d;
	int	m;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
		ft_putnbr_fd(n, fd);
	}
	if (n >= 10)
	{
		printf("ana hna");
		m = n % 10;
		d = n / 10;
		ft_putnbr_fd(n, fd);
		ft_putchar_fd(m + '0', fd);
	}
	ft_putchar_fd(n + '0', fd);
}

int main()
{
	int n = 12345;
	ft_putnbr_fd(n , 1);

}
