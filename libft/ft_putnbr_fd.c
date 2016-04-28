/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthidet <rthidet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 21:33:19 by rthidet           #+#    #+#             */
/*   Updated: 2015/12/16 13:00:58 by rthidet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		nblen(int *len, int n)
{
	while (n != 0)
	{
		n /= 10;
		if (n != 0)
			*len *= 10;
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	int			len;

	len = 1;
	if (n != -2147483648)
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		nblen(&len, n);
		while (len >= 1)
		{
			ft_putchar_fd(48 + (n / len), fd);
			n = n % len;
			len = len / 10;
		}
	}
	else
		ft_putstr_fd("-2147483648", fd);
}
