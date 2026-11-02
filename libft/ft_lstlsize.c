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

// unsigned int	*ft_lstsize(t_list *lst)
// {
// 	unsigned int	nb_node;


// }

int main()
{
	t_list	**node1;
	t_list	*node2;

	node1 = ft_lstnew("hellooo node one");
	node2 = ft_lstnew("node nb 2");

	ft_lstadd_front(node1, node2);
	printf("%s\n",node1->content);
}