/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthidet <rthidet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 11:44:20 by rthidet           #+#    #+#             */
/*   Updated: 2015/12/19 16:38:41 by rthidet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_nbrlen(int n)
{
	int				i;

	i = 0;
	if (n == 0)
		i++;
	else if (n < 0)
		i++;
	else
	{
		while (n > 0)
		{
			i++;
			n /= 10;
		}
	}
	return (i);
}

char				*ft_itoa(int n)
{
	int				i;
	unsigned int	x;
	char			*buff;
	int				neg;

	if (!(buff = ft_strnew(ft_nbrlen(n))))
		return (NULL);
	x = n;
	if ((neg = n) < 0)
		x = -n;
	i = 0;
	if (x == 0)
		buff[i++] = '0';
	while (x > 0)
	{
		buff[i++] = x % 10 + '0';
		x /= 10;
	}
	if (neg < 0)
		buff[i++] = '-';
	buff[i++] = '\0';
	ft_strrev(buff);
	return (buff);
}
