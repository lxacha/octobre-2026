/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Untitled-1                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 18:35:43 by leolefeb          #+#    #+#             */
/*   Updated: 2026/11/03 18:35:43 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*next_node;

	if (!lst || !*lst || !new)
		return ;
	if(lst)
	{
		if (*lst)
		{
			next_node = ft_lstlast(*lst);
			next_node->next = new;
		}
		else 
			*lst = new;
	}
}
	// newl->next_node = *lst;
	// *lst = newl;
