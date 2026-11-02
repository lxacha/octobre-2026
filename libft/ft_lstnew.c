/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 14:12:07 by leolefeb          #+#    #+#             */
/*   Updated: 2026/11/02 14:12:07 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list *newNode;

	newNode = malloc(sizeof(t_list));
	if (!newNode)
		return (NULL);
	newNode->content = content;
	newNode->next = NULL;
	return (newNode);
}

// int main()
// {
// 	t_list *Node1;
// 	char	*content = "damn";
// 	Node1 = ft_lstnew(content);
// 	printf("%s",(char *)Node1->content);
// }