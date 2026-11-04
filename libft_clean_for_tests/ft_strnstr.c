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
#include "libft.h"

static size_t	size_of(const char *s)
{
	size_t	size;

	size = 0;
	while (s[size] != '\0')
		size++;
	return (size);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	if (size_of(little) == 0)
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		while (i < len && little[y] != '\0')
		{
			if (big[i] != little[y])
			{
				i = i - y;
				y = 0;
				break ;
			}
			if (y == size_of(little) - 1)
				return ((char *)&big[i - size_of(little) + 1]);
			i++;
			y++;
		}
		i++;
	}
	return (NULL);
}

// int main(){
//     ft_strnstr("abcabcabd", "abcabd", 9);
//     return 0;
// }
