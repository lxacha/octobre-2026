/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:24:33 by leolefeb          #+#    #+#             */
/*   Updated: 2026/10/28 17:24:33 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

// static char	function_n_1(unsigned int d,char a)
// {
// 	a = 'B';
// 	if (d >= 0)
// 	{
// 		return a;
// 	}
// 	return a;
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	new_str = malloc(sizeof(char) * ft_strlen(s)+1);
	if (!new_str)
		return (NULL);
	while(s[i] != '\0')
	{
		new_str[i] = f(i,s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// int main(){
// 	char	*a = "AAAAAAAAAA";
// 	ft_strmapi(a,function_n_1);
// }