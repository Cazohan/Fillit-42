/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthidet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/25 19:01:00 by rthidet           #+#    #+#             */
/*   Updated: 2015/12/10 12:33:26 by rthidet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strrev(char *str)
{
	char *ret;
	char tmp;

	ret = str + ft_strlen(str) - 1;
	while (str < ret)
	{
		tmp = *str;
		*str++ = *ret;
		*ret-- = tmp;
	}
}
