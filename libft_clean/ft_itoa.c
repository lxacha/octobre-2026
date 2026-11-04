/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:00:00 by leolefeb          #+#    #+#             */
/*   Updated: 2026/11/03 12:00:00 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long nb)
{
	int		count;

	count = 0;
	if (nb <= 0)
		count = 1;
	while (nb != 0)
	{
		count++;
		nb = nb / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	long	nb;
	char	*s;

	nb = n;
	i = count_digits(nb);
	s = malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i] = '\0';
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		s[0] = '0';
	while (nb != 0)
	{
		i--;
		s[i] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (s);
}

// first draft (kept):
// char 	*ft_itoa(int n)
// {
// 	int		i;
// 	int		y;
// 	char	*s;
// 	char	*final_s;
//
// 	i = 0;
// 	y = 0;
// 	s = malloc(sizeof(char) * n);
// 	final_s = malloc(sizeof(char) * n);
// 	while ( n != 0)
// 	{
// 		s[i] = (n%10) + '0';
// 		n = n/10;
// 		i++;
// 	}
// 	i--;
// 	while (i != -1)
// 	{
// 		final_s[y] = s[i];
// 		y++;
// 		i--;
// 	}
// 	return (final_s);
// }
