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

static int	is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

static int	skip_start(const char *nptr, int *neg)
{
	int		i;

	i = 0;
	while (is_space(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			*neg = -1;
		i++;
	}
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	int		y;
	long	converted;
	int		neg;

	neg = 1;
	y = 1;
	converted = 0;
	i = skip_start(nptr, &neg);
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		converted = (converted * y) + nptr[i] - '0';
		y = 10;
		i++;
	}
	return ((int)(converted * neg));
}

// int main(){
//     char    *phrase = "  -2145";
//     char    *phrase1 = "-+344345";
//     char    *phrase2 = "-asdf300000";
//     char    *phrase3 = "4444sdf32";
//     char    *phrase4 = " 999";
//
//     printf("yours : %d\n ",ft_atoi(phrase));
//     printf("true : %d\n\n",atoi(phrase));
// }
