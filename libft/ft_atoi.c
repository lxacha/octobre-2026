/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:43:27 by leolefeb          #+#    #+#             */
/*   Updated: 2026/10/28 13:12:42 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int		i;
	int		y;
	int		converted;
	int		neg;
	int		start_digi;

	neg = 1;
	start_digi = 0;
	i = 0;
	y = 1;
	converted = 0;
	while (nptr[i] != '\0')
	{
		if ((nptr[i] == 43 || nptr[i] == 32 || (nptr[i] >= 9  && nptr[i] <= 13)) && ( start_digi == 0))
		{
			i++;
			continue;
		}
		if ((nptr[i] == '-') && start_digi == 0 && neg != -1){
			neg = neg * -1;
			i++;
			continue;
		}
		if (nptr[i] >= 48 && nptr[i] <= 57 )
		{
			start_digi = 1;
			converted = (converted * y) + nptr[i] - '0';
			if (y == 1)
				y = y * 10;
		}
		else
			break ;
		i++;
	}
	converted = converted * neg;
	return (converted);
}

int main(){
    char    *phrase = "  -2145";
	char	*phrase1 = "-+344345";
	char	*phrase2 = "-asdf300000";
	char	*phrase3 = "4444sdf32";
	char	*phrase4 = " 999";

    printf("yours : %d\n ",ft_atoi(phrase));
    printf("true : %d\n\n",atoi(phrase));

	printf("yours : %d\n",ft_atoi(phrase1));
    printf("true : %d\n\n",atoi(phrase1));

    printf("yours : %d\n",ft_atoi(phrase2));
    printf("true : %d\n\n",atoi(phrase2));
    
	printf("yours : %d\n",ft_atoi(phrase3));
    printf("true : %d\n\n",atoi(phrase3));
    
	printf("yours : %d\n",ft_atoi(phrase4));
    printf("true : %d\n",atoi(phrase4));
}
