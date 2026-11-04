/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 22:13:34 by leolefeb          #+#    #+#             */
/*   Updated: 2026/11/02 23:57:14 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// void	delete(void *data1)
// {
// 	if (!data1)
// 		return ;
// 	free(data1);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del)
		(*del)(lst->content);
	free(lst);
}
