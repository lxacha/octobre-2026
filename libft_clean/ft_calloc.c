/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:00:00 by leolefeb          #+#    #+#             */
/*   Updated: 2026/11/03 12:00:00 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*poin;

	if (nmemb == 0 || size == 0)
	{
		poin = malloc(0);
		return (poin);
	}
	if (size > (size_t)-1 / nmemb)
		return (NULL);
	poin = malloc(nmemb * size);
	if (!poin)
		return (NULL);
	ft_bzero(poin, size * nmemb);
	return (poin);
}

// check separtly if nmemb of size is equal to zero before check siz >
// size_t -1
// avec bzero , ecrire dans l'espace allouer

// int	main(){
// 	void	*pointer;
//
// 	pointer = ft_calloc(0,12);
// 	free(pointer);
// 	return (0);
// }
