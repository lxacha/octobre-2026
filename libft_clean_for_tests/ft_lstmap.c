/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 01:18:59 by leolefeb          #+#    #+#             */
/*   Updated: 2026/11/03 02:20:14 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dup;
	t_list	*node;
	void	*content;

	dup = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&dup, del);
			return (NULL);
		}
		ft_lstadd_back(&dup, node);
		lst = lst->next;
	}
	return (dup);
}

// first draft (kept):
// void	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	**dup;
// 	dup = malloc(sizeof(lst));
// 	*dup = malloc(sizeof(*lst));
//
// 	if(!lst)
// 		return ;
// 	while lst
// 		dup = lst;
// 		dup->content = f(lst->content);
// 		lst = lst->next;
// }
