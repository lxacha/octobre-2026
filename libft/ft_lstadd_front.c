/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:41:38 by marvin            #+#    #+#             */
/*   Updated: 2026/11/02 12:41:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return ;
    lst->next = new;
}

int main()
{
    t_list  *node1;
    t_list  *node2;

    node1 = ft_lstnew("node nb 1");
    node2 = ft_lstnew("node nb 2");

    ft_lstadd_front(node1,node2);
}