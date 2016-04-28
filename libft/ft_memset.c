/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthidet <rthidet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 13:27:49 by rthidet           #+#    #+#             */
/*   Updated: 2015/11/25 17:41:12 by rthidet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char *s1;

	s1 = (unsigned char*)str;
	while (n > 0)
	{
		*s1 = (unsigned char)c;
		s1++;
		n--;
	}
	return (str);
}
