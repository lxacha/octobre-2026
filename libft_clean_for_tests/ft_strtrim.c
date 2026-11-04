/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:00:00 by leolefeb          #+#    #+#             */
/*   Updated: 2026/11/03 12:00:00 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	start_ite(char const *s1_b, char const *set_b, size_t start)
{
	size_t		y;
	size_t		ite_char_b;
	size_t		i;

	y = 0;
	i = start;
	ite_char_b = 0;
	while (set_b[y] != '\0')
	{
		if (s1_b[i] == set_b[y])
		{
			ite_char_b++;
			i++;
			y = 0;
			continue ;
		}
		y++;
	}
	return (ite_char_b);
}

static size_t	start_end(char const *s1_c, char const *set_c, size_t end,
		size_t ind_end_st)
{
	size_t		y;

	y = 0;
	while (end > ind_end_st)
	{
		if (s1_c[end - 1] == set_c[y])
		{
			end--;
			y = 0;
			continue ;
		}
		if (set_c[y] == '\0')
			return (end);
		y++;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		y;
	size_t		ite_char;
	size_t		end;
	char		*cop;

	y = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	end = ft_strlen(s1);
	ite_char = start_ite(s1, set, 0);
	i = start_end(s1, set, end, ite_char);
	cop = malloc(sizeof(char) * (i - ite_char) + 1);
	if (!cop)
		return (NULL);
	while (ite_char < i)
		cop[y++] = s1[ite_char++];
	cop[y] = '\0';
	return (cop);
}

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t		i;
// 	size_t		y;
// 	size_t		x;
// 	size_t		bool1;
// 	char	*cop;

// 	y = 0;
// 	x = 0;
// 	bool1 = 0;
// 	i = ft_strlen(s1);
// 	cop = malloc(sizeof(char) * i);
// 	i = 0;
// 	while (s1[i] != '\0')
// 	{
// 		while (set[y] != '\0' )
// 		{
// 			if (s1[i] == set[y] && bool1 == 0)
// 			{
// 				i++;
// 				y=0;
// 			}

// 		}
// 		y++;
// 		cop[x] = s1[i];
// 		i++;
// 		x++;
// 	}
// 	cop[x]= '\0';
// 	return (cop);
// }

// int		main()
// {
// 	char	*s1 = "";

// 	char	*char_rm = "123";
// 	char	*copy;

// 	copy = ft_strtrim(s1, char_rm);
// 	free(copy);
// }
