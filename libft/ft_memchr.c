/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthidet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 18:30:21 by rthidet           #+#    #+#             */
/*   Updated: 2015/12/10 21:23:48 by rthidet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *scopy;

	scopy = (unsigned char*)s;
	while (n > 0 && *scopy != (unsigned char)c)
	{
		scopy++;
		n--;
	}
	if (n == 0)
		return (NULL);
	else
		return (scopy);
}
