/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:45:14 by leolefeb          #+#    #+#             */
/*   Updated: 2026/10/27 21:00:21 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long			i;
	unsigned char	*b;

	i = 0;
	b = 0;
	while (i != n)
	{
		if (((unsigned char *)s)[i] == (unsigned char )c)
		{
			b = (unsigned char *)&s[i];
			break ;
		}
		n++;
		i++;
	}
	return (b);
}
/*
int main(){
    char    *str_1 = "where is the damn dog";
    char    a;
    int     size_a;

    size_a = 4;
    a = 'a';
    ft_memchr(str_1, a, size_a);

    return 0;
}
*/