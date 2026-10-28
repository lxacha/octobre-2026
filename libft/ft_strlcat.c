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
#include <stdio.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t		i;
	size_t		y;
	
	i_len = 0;
	y = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size == (size_t)ft_strlen(dest))
		return (ft_strlen(src) + ft_strlen(dest));
	if (size < (size_t)ft_strlen(dest))
		return (size + ft_strlen(src));
	while (dest[i] != '\0')
		i++;
	while (src[y] != '\0' && y + ft_strlen(dest) <= size)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (i); // to avoid tester warning
}

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	dlen;
// 	size_t	slen;
// 	size_t	i;

// 	dlen = ft_strlen(dest);
// 	slen = ft_strlen(src);
// 	i = 0;
// 	if (size == 0)
// 		return (ft_strlen(src));
// 	if (size == ft_strlen(dst))
// 		return (ft_strlen(src) + ft_strlen(dst));
// 	if (size < ft_strlen(dst)) // this one motherfucker
// 		return (size + ft_strlen(src));
// 	while (dlen < size && dst[dlen] != '\0')
// 		dlen++;
// 	while (dlen + i < size - 1 && src[i] != '\0')
// 	{
// 		dst[dlen + i] = src[i];
// 		i++;
// 	}
// 	dst[dlen + i] = '\0';
// 	return (dlen + slen);
// }

// int main(){
//     char    src[30] = "";
//     char    dest[30] = "destination";
	
// 	char    src1[30] = "12341234";
//     char    dest1[30] = "destination";

// 	char    src2[30] = "fuckksdfkljasdsource";
//     char    dest2[15] = "destina\0tion";
	
//     char    srcb[30] = "";
//     char    destb[30] = "destination";
	
// 	char    src1b[30] = "12341234";
//     char    dest1b[30] = "destination";

// 	char    src2b[30] = "fuckksdfkljasdsource";
//     char    dest2b[15] = "destina\0tion";

//     int     n;
//     int     n1;
//     int     n2;


//     n = 0;
//     n1 = 2;
//     n2 = 40;
	

//     printf("yours : %zu \n",ft_strlcat(dest , src, n));
//     printf("true : %zu \n\n",strlcat(destb , srcb, n));

// 	printf("yours : %zu \n",ft_strlcat(dest1 , src1, n1));
//     printf("true : %zu \n\n",strlcat(dest1b , src1b, n1));

// 	printf("yours : %zu \n",ft_strlcat(dest2 , src2, n2));
//     printf("true : %zu \n\n",strlcat(dest2b , src2b, n2));
// }
