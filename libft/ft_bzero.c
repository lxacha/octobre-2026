/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:44:05 by leolefeb          #+#    #+#             */
/*   Updated: 2026/10/26 14:43:17 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(char *a, int n)
{
	while (n != 0)
	{
		a[0] = '\0';
		a++;
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