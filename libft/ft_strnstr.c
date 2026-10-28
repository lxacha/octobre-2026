/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:46:45 by leolefeb          #+#    #+#             */
/*   Updated: 2026/10/28 12:54:39 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	size_of(const char *s)
{
	int	size;

	size = 0;
	while (s[size] != '\0')
		size++;
	return (size);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	y;
	char	*occur;

	i = 0;
	y = 0;
	occur = NULL;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (i <= len && big[i] != '\0')
	{
		while (y <= ((size_t)ft_strlen(little)) && little[y] != '\0')
		{
			if (i >= len)
				break;
			if (big[i] != little[y])
			{
				i = i - y;
				y = 0;
				break ;
			}
			if (y == ((size_t)ft_strlen(little)) -1)
			{
				occur = (char *)&big[i - size_of(little) + 1];
				return (occur);
			}
			i++;
			y++;
		}
		i++;
	}
	return (NULL);
}

// int main(){
//     // char    *str1 = "Welcome to dog town, fuck taxes, fuck corpos ";
//     // char    *s2 = "taxes";
//     int     size_1;

//     size_1 = 50;

//     ft_strnstr("abcabcabd", "abcabd", 9);
//     return 0;
// }