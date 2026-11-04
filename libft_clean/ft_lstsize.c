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

// decla node1 before *node1
