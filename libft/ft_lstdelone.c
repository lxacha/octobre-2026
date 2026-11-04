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
#include <stdio.h>

// void	delete(void *data1)
// {
// 	if (!data1)
// 		return ;
// 	free(data1);
// }
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// int main()
// {
// 	t_list	**node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*node_last_back;

// 	char	*a;

// 	node1 = malloc(sizeof(t_list));
// 	a = ft_strdup("hello");
// 	*node1 = ft_lstnew(a);
// 	node2 = ft_lstnew("node nb 2");
// 	node3 = ft_lstnew("node nb 3");
// 	node_last_back = ft_lstnew("this is new node of last back");

// 	ft_lstadd_front(node1, node2);
// 	ft_lstadd_front(node1, node3);
// 	ft_lstsize(*node1);
// 	ft_lstlast(node3);
// 	ft_lstadd_back(node1, node_last_back);
// 	// ft_lstdelone(node2, delete);
// 	printf("%s \n",(char *)ft_lstlast(node2)->content);

// 	return (0);
// }