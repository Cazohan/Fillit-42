/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthidet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 22:09:13 by rthidet           #+#    #+#             */
/*   Updated: 2015/12/04 03:01:51 by rthidet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	ret = ft_memalloc(ft_strlen(s) + 1);
	if (ret == NULL)
		return (NULL);
	i = -1;
	while (s[++i])
	{
		ret[i] = f(s[i]);
	}
	ret[i] = '\0';
	return (ret);
}
