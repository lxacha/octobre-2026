/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:16:32 by leolefeb          #+#    #+#             */
/*   Updated: 2026/10/28 17:20:32 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

// void	function_n_2(unsigned int d, char *a)
// {
// 	if (a[d] == 'A')
// 		a[d] = 'B';
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int		i;

	i = 0;
	while (s[i] != '\0')
	{	
		f(i,&s[i]);
		i++;
	}
}

