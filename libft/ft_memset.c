/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:45:53 by leolefeb          #+#    #+#             */
/*   Updated: 2026/10/26 14:41:20 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(char *a, int c, int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		a[i] = c + '0';
		i++;
		n--;
	}
}
/*
int main(int argc,char **argv){

    char *a = argv[1];

    int cfill = 1;
    int nstop = 2;
    int i = 0;

    ft_memset(a,cfill,nstop);

    while(*a != '\0'){
        write(1,a++,1);
        i++;
    }
    return 0;
}
*/