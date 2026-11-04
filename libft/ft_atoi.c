/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:43:27 by leolefeb          #+#    #+#             */
/*   Updated: 2026/10/30 20:13:04 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int c;
	int s;
	int res;

	c = 0;
	s = 1;
	res = 0;
	while (str[c] == ' ' || str[c] == '\n' || str[c] == '\t' ||
			str[c] == '\v' || str[c] == '\f' || str[c] == '\r')
		c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			s = -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (res * 10) + (str[c] - '0');
		c++;
	}
	return (res * s);
}

// int	ft_atoi(const char *nptr)
// {
// 	int		i;
// 	int		y;
// 	int		converted;
// 	int		neg;


// 	// s = neg , c = i , res = converted

// 	neg = 1;
// 	start_digi = 0;
// 	i = 0;
// 	y = 1;
// 	converted = 0;
// 	while (nptr[i] != '\0')
// 	{
// 		while ((nptr[i] == 43 || nptr[i] == 32 || (nptr[i] >= 9  && nptr[i] <= 13)) && ( start_digi == 0))
// 			i++;
// 		while ((nptr[i] == '-') && start_digi == 0 && neg != -1)
// 		{
// 			neg = -1;
// 			i++;
// 		}
// 		if (nptr[i] >= 48 && nptr[i] <= 57 )
// 		{
// 			start_digi = 1;
// 			converted = (converted * y) + nptr[i] - '0';
// 			if (y == 1)
// 				y = y * 10;
// 		}
// 		else
// 			break ;
// 		i++;
// 	}
// 	converted = converted * neg;
// 	return (converted);
// }

// int main(){
//     char    *phrase = "  -2145";
// 	char	*phrase1 = "-+344345";
// 	char	*phrase2 = "-asdf300000";
// 	char	*phrase3 = "4444sdf32";
// 	char	*phrase4 = " 999";

//     printf("yours : %d\n ",ft_atoi(phrase));
//     printf("true : %d\n\n",atoi(phrase));

// 	printf("yours : %d\n",ft_atoi(phrase1));
//     printf("true : %d\n\n",atoi(phrase1));

//     printf("yours : %d\n",ft_atoi(phrase2));
//     printf("true : %d\n\n",atoi(phrase2));
    
// 	printf("yours : %d\n",ft_atoi(phrase3));
//     printf("true : %d\n\n",atoi(phrase3));
    
// 	printf("yours : %d\n",ft_atoi(phrase4));
//     printf("true : %d\n",atoi(phrase4));
// }
