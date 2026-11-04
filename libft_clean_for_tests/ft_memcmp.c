/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:45:23 by leolefeb          #+#    #+#             */
/*   Updated: 2026/10/27 21:00:35 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		eq;

	i = 0;
	eq = 0;
	while (i != n)
	{
		eq = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
		if (eq != 0)
			return (eq);
		i++;
	}
	return (eq);
}

/*
int main(){
    char    *a = "hello everyone ,";
    char    *b = "i wish i were a bird";
    char    *c = "hell to everyone ";

    int     size_b = 4;

    ft_memcmp(a, b, size_b);

    return 0;
}
*/
