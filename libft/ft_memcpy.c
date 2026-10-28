/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:45:36 by leolefeb          #+#    #+#             */
/*   Updated: 2026/10/28 00:43:51 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(char *dest, char *src, int size_n)
{
	int	i;

	i = 0;
	while (i != size_n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}


// int main(){

//     char    dest[50] = "destination";
//     char    src[50] = "sourceeeeee";

//     int     n_bytes;

//     n_bytes = 4;

//     ft_memcpy(dest, src, n_bytes);
// }
