/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthidet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:49:36 by rthidet           #+#    #+#             */
/*   Updated: 2015/12/19 16:36:49 by rthidet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dest;
	const char	*srce;
	size_t		i;
	size_t		den;

	i = size;
	dest = dst;
	srce = src;
	while (i-- != 0 && *dest != '\0')
		dest++;
	den = dest - dst;
	i = size - den;
	if (i == 0)
		return (den + ft_strlen(srce));
	while (*srce != '\0')
	{
		if (i != 1)
		{
			*dest++ = *srce;
			i--;
		}
		srce++;
	}
	*dest = '\0';
	return (den + (srce - src));
}
