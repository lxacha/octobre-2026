/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:00:00 by leolefeb          #+#    #+#             */
/*   Updated: 2026/11/03 12:00:00 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	*s_i;

	i = 0;
	s_i = ft_itoa(n);
	if (!s_i)
		return ;
	while (s_i[i] != '\0')
	{
		write(fd, &s_i[i], 1);
		i++;
	}
	free(s_i);
}

// int	main()
// {
// 	int		a;
// 	a = 777;
// 	ft_putnbr_fd(a, 1);
// }
