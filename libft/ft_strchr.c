/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:46:02 by leolefeb          #+#    #+#             */
/*   Updated: 2026/10/25 22:46:02 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	const char	*point_f;
	int		i;

	i = 0;
	point_f = NULL;

	if (str[0] == '\0' && (unsigned char)c == 0)
		point_f = &str[0];
	while (str[i] != '\0' )
	{
		if (str[i+1] == '\0' && (unsigned char)c == 0)
		{
			point_f = &str[i+1];
			return ((char *)point_f);
		}
		if (str[i] == (unsigned char)c)
		{
			point_f = &str[i];
			break ;
		}
		i++;
	}
	return ((char *)point_f);
}

// int main(){
//     char    str1[20] = "str nbr 1 ...";
//     char    a;

//     a = 't';
//     ft_strchr(str1,a+256);
// }
