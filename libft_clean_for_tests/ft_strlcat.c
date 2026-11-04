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

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		ind_dest;
	size_t		ind_src;
	size_t		i;
	size_t		x;

	ind_dest = ft_strlen(dest);
	ind_src = ft_strlen(src);
	i = 0;
	x = ind_dest;
	if (size > 0 && ind_dest < size - 1)
	{
		while (src[i] && ind_dest + i < size - 1)
		{
			dest[x] = src[i];
			i++;
			x++;
		}
		dest[x] = '\0';
	}
	if (ind_dest >= size)
		ind_dest = size;
	return (ind_dest + ind_src);
}

// int main(){
//     char    src[30] = "";
//     char    dest[30] = "destination";
//
//     char    src2[30] = "fuckksdfkljasdsource";
//     char    dest2[15] = "destina\0tion";
//
//     printf("yours : %zu \n",ft_strlcat(dest , src, 0));
//     printf("true : %zu \n\n",strlcat(dest , src, 0));
// }
