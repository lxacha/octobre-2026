/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolefeb <leolefeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:00:00 by leolefeb          #+#    #+#             */
/*   Updated: 2026/11/05 04:37:50 by leolefeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*trim_str(const char *str, char sep)
{
	while (*str && *str == sep)
		str++;
	while (*str && *str != sep)
		str++;
	while (*str && *str == sep)
		str++;
	return (str);
}

static void	write_in_x_y(char *token, const char *trimmed,
		const char *cursor, char c)
{
	size_t		y;

	y = 0;
	while (*cursor && *cursor == c)
		cursor++;
	while (cursor != trimmed)
	{
		if (*cursor == c)
			break ;
		token[y] = *cursor;
		cursor++;
		y++;
	}
	token[y] = '\0';
}

static size_t	count_tokens(const char *trimmed, char c)
{
	size_t		nb;

	nb = 0;
	while (*trimmed)
	{
		trimmed = trim_str(trimmed, c);
		nb++;
	}
	return (nb);
}

static int	fill_tokens(char **tokens, const char *trimmed, char c)
{
	const char	*cursor;
	size_t		x;

	x = 0;
	while (*trimmed)
	{
		cursor = trimmed;
		trimmed = trim_str(trimmed, c);
		tokens[x] = malloc(trimmed - cursor + 1);
		if (!tokens[x])
		{
			while (x > 0)
				free(tokens[--x]);
			free(tokens);
			return (0);
		}
		write_in_x_y(tokens[x], trimmed, cursor, c);
		x++;
	}
	tokens[x] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char		**tokens;
	char		*trimmed;
	char		set_trim[2];

	if (!s)
		return (NULL);
	set_trim[0] = c;
	set_trim[1] = '\0';
	trimmed = ft_strtrim(s, set_trim);
	if (!trimmed)
		return (NULL);
	tokens = malloc(sizeof(char *) * (count_tokens(trimmed, c) + 1));
	if (tokens && !fill_tokens(tokens, trimmed, c))
		tokens = NULL;
	free(trimmed);
	return (tokens);
}
