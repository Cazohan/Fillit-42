/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthidet <rthidet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 16:10:13 by rthidet           #+#    #+#             */
/*   Updated: 2015/12/20 16:17:07 by rthidet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint_fd(t_list *lst, int fd)
{
	while (lst)
	{
		ft_putendl_fd(lst->content, fd);
		lst = lst->next;
	}
}
