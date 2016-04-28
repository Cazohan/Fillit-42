/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthidet <rthidet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 04:35:31 by rthidet           #+#    #+#             */
/*   Updated: 2015/12/16 12:16:51 by rthidet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(const void *str, size_t n)
{
	void *new;

	if (!(new = malloc(sizeof(unsigned char) * n)))
		return (NULL);
	ft_memcpy(new, str, n);
	return (new);
}
