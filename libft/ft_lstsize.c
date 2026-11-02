/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 14:44:01 by leolefeb          #+#    #+#             */
/*   Updated: 2026/11/02 14:44:01 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	nb_node;

	nb_node = 0;
	while (lst)
	{
		lst = lst->next;
		nb_node++;
	}
	return (nb_node);
}

// int main()
// {
// 	t_list	**node1;
// 	t_list	*node2;
// 	char	*a;

// 	node1 = malloc(sizeof(t_list));
// 	a = ft_strdup("hello");
// 	*node1 = ft_lstnew(a);
// 	node2 = ft_lstnew("node nb 2");

// 	ft_lstadd_front(node1, node2);
// 	ft_lstsize(*node1);
// 	return (0);
// }

//decla node1 before *node1