/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:45:44 by leolefeb          #+#    #+#             */
/*   Updated: 2026/11/05 01:35:21 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n_size)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!src && !dest)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (d > s)
	{
		while (n_size-- != 0)
			d[n_size] = s[n_size];
		return (dest);
	}
	while (i != n_size)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
int main(){
    char    dest[20] = "destination";
    char    src[20] = "source";
    int     size_n = 4;

    ft_memmove(dest,src,size_n);
}
*/
