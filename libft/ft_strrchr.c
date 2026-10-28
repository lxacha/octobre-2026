/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:46:55 by leolefeb          #+#    #+#             */
/*   Updated: 2026/10/28 09:08:01 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*d;

	i = ft_strlen(s);
	d = NULL;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
		{
			d = (char *)&s[i];
			break ;
		}
		i--;
	}
	return (d);
}
/*
int main(){
    char    src[20] = "source";
    char    a;

    a = 'r';

    ft_strrchr(src , a);
}
*/