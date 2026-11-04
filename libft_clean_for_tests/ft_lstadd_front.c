/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 20:21:51 by leolefeb          #+#    #+#             */
/*   Updated: 2026/11/02 20:21:51 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *newl)
{
	if (!lst || !newl)
		return ;
	newl->next = *lst;
	*lst = newl;
}

// int main()
// {
//     t_list  **node1;
//     t_list  *node2;
//
//     *node1 = ft_lstnew("node nb 1");
//     node2 = ft_lstnew("node nb 2");
//
//     ft_lstadd_front(node1,node2);
// 	return (0);
// }
