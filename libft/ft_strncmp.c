/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:46:35 by leolefeb          #+#    #+#             */
/*   Updated: 2026/10/28 02:25:26 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	int		y;

	i = 0;
	y = 0;
	while (i != n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		y = y + (s1[i] - s2[i]);
		i++;
	}
	return (y);
}

// int main(){
//     char    phrase1[10] = "bjr\0kitty";
//     char    phrase2[10] = "bjr\0hello";
// //    char    phrase3[10] = "unilateral";
// //    char    phrase4[10] = "unicad";

//     ft_strncmp(phrase1,phrase2,4);

//     return 0;
// }
