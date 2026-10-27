/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:46:12 by leolefeb          #+#    #+#             */
/*   Updated: 2026/10/25 22:46:12 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned long		i;
	unsigned long		y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
		i++;
	while (src[y] != '\0' && y <= size)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
}
/*
int main(){
    char    src[30] = "source";
    char    dest[30] = "destination";
    int     n;

    n = 0;

    ft_strlcat(dest , src, n);

    printf("%s",dest);
}
*/