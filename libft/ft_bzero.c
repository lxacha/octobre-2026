/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:44:05 by leolefeb          #+#    #+#             */
/*   Updated: 2026/10/28 02:17:37 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *a, size_t n)
{
	size_t		i;

	i = 0;
	while (n != 0)
	{
		((char *)a)[i] = '\0';
		i++;
		n--;
	}
}

/*
int main(int argc, char **argv){
    char    *a;
    int     n;

    n = 4;
    a = argv[1];
    ft_bzero(a,n);
    printf("%s",a);
    
    return 0;
}
*/