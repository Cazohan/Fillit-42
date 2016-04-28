/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthidet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 23:58:48 by rthidet           #+#    #+#             */
/*   Updated: 2015/12/19 16:41:43 by rthidet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*ret;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ret = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (ret == NULL)
		return (NULL);
	i = -1;
	while (*s1)
		ret[++i] = *s1++;
	while (*s2)
		ret[++i] = *s2++;
	ret[++i] = '\0';
	return (ret);
}
