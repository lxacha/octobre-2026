/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:16:42 by leolefeb          #+#    #+#             */
/*   Updated: 2026/10/28 17:16:42 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *conc_s1_s2;
	int		i;
	int		y;
	
	i = 0;
	y = 0;
	y = ft_strlen(s1) + ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	conc_s1_s2 = malloc(sizeof(char) * y);
	if (!conc_s1_s2)
		return (NULL);
	while (s1[i] != '\0')
	{
		conc_s1_s2[i] = s1[i];
		i++;
	}
	while (s2[y] != '\0')
	{
		conc_s1_s2[i] = s2[y];
		i++;
		y++;
	}
	conc_s1_s2[i] = '\0';
	return (conc_s1_s2);
}

// int	main()
// {
// 	char	*s1 = "phrase n1";
// 	char	*s2 = " phrase n2";
	
// 	ft_strjoin(s1, s2);
// 	return (0);
// }