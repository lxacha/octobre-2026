/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:45:53 by leolefeb          #+#    #+#             */
/*   Updated: 2026/10/28 00:27:34 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(char *a, int c, int n)
{
	int	i;
	void	*point;

	point = &a;
	i = 0;
	while (n != 0)
	{
		a[i] =  (char)c;
		i++;
		n--;
	}
	return (point);
}

// int main(){

//     char a[50] = "its Damn time";


//     ft_memset(a,'a',6);

//     return 0;
// }