/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:46:21 by leolefeb          #+#    #+#             */
/*   Updated: 2026/10/25 22:46:21 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t n_size)
{
	size_t	i;

	i = 0;
	if (n_size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < n_size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
int main(){
    char dest[20] = "destination";
    char src[20] = " source";
    int     n;

    n = 4;
    ft_strlcpy(dest,src,n);
}
*/