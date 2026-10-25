/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:45:44 by leolefeb          #+#    #+#             */
/*   Updated: 2026/10/25 23:43:24 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memmove(char *dest, char *src, int n_size)
{
	char	dup_src[100];
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dup_src[i] = src[i];
		i++;
	}
	dup_src[i] = '\0';
	i = 0;
	while (i != n_size)
	{
		dest[i] = dup_src[i];
		i++;
	}
}
/*
int main(){
    char    dest[20] = "destination";
    char    src[20] = "source";
    int     size_n = 4;

    ft_memmove(dest,src,size_n);
}
*/