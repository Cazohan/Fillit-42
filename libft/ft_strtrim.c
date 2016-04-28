/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthidet <rthidet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 15:17:03 by rthidet           #+#    #+#             */
/*   Updated: 2015/12/19 16:35:48 by rthidet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		lon;
	char	*ret;

	if (s == NULL)
		return (NULL);
	lon = ft_strlen(s);
	while (s[lon - 1] == '\n' || s[lon - 1] == '\t' || s[lon - 1] == ' ')
		lon--;
	i = -1;
	while (s[++i] == '\t' || s[i] == '\n' || s[i] == ' ')
		lon--;
	if (lon <= 0)
		lon = 0;
	ret = ft_memalloc(lon + 1);
	if (ret == NULL)
		return (NULL);
	s += i;
	i = -1;
	while (++i < lon)
		ret[i] = *s++;
	ret[i] = '\0';
	return (ret);
}
