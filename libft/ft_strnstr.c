/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthidet <rthidet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:19:16 by rthidet           #+#    #+#             */
/*   Updated: 2015/12/19 19:28:11 by rthidet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t bilen)
{
	size_t	lilen;

	if (little[0] == '\0')
		return ((char*)big);
	lilen = ft_strlen(little);
	while (*big != '\0' && bilen-- >= lilen)
	{
		if (*big == *little && ft_memcmp(big, little, lilen) == 0)
			return ((char*)big);
		big++;
	}
	return (NULL);
}
