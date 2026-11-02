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

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while(lst->next != NULL)
		lst = lst->next;
	return (lst);
}
// int main()
// {
// 	t_list	**node1;
// 	t_list	*node2;
// 	t_list	*node3;

// 	char	*a;

// 	node1 = malloc(sizeof(t_list));
// 	a = ft_strdup("hello");
// 	*node1 = ft_lstnew(a);
// 	node2 = ft_lstnew("node nb 2");
// 	node3 = ft_lstnew("node nb 3");

// 	ft_lstadd_front(node1, node2);
// 	ft_lstadd_front(node1, node3);
// 	ft_lstsize(*node1);
// 	ft_lstlast(node3);
// 	printf("%s \n",(char *)ft_lstlast(*node1)->content);

// 	return (0);
// }
