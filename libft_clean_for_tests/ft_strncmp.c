/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:46:35 by leolefeb          #+#    #+#             */
/*   Updated: 2026/10/28 07:18:38 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	y;

	i = 0;
	y = 0;
	while (i != n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (y);
}

// int main(){
//     char    phrase1[10] = "bjr\0kitty";
//     char    phrase2[10] = "bjr\0hello";
//
//     ft_strncmp(phrase1,phrase2,4);
//
//     return 0;
// }

// pourquoi unsigned char - unsigned char = int ????
