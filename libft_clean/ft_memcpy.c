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

void	*ft_memcpy(void *dest, const void *src, size_t size_n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	if (!src)
		return (dest);
	if (!dest)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (i != size_n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int main(){
//
//     char    dest[50] = "destination";
//     char    src[50] = "sourceeeeee";
//
//     int     n_bytes;
//
//     n_bytes = 4;
//
//     ft_memcpy(dest, src, n_bytes);
// }
