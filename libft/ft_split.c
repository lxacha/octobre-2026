#include <stdlib.h>
#include "libft.h"

//char **ft_split(char const *s, char c)
//{
	// declare tokens[][];
	// check if str !NULL;
	// trim str;
	// malloc tokens;
		// calculate numbers of array in tokens; 	memchr
		// calculate size of each tokens 
		// attribute number of tokens
		// attribute each tokens size
	// write in tokens
		//iterate through tokens[x][] while *str
			//iterate through tokens[][x]
			// write str[x] in tokens[][x]		 memcpy
		// write NULL byte tokens[][x]
	// return **tokens
	
//}

static const char	*calc_len_token(const char *str, char sep)
{
	while (*str == sep)
		str++;
	while(*str && *str != sep )
		str++;
	return (str);
}

static void 	write_in_x_y(char **tokens, size_t x,const char *trimmed, const char *cursor, char c)
{
	size_t		y;

	y = 0;
	while (*cursor == c)
		cursor++;
	while (cursor != trimmed )
	{
		tokens[x][y] = *cursor;
		cursor++;
		y++;
	}
	tokens[x][y] = '\0'; 
}

static char 	*to_str(char c)
{
	char 	*str_set;

	str_set = malloc(2);
	if (!str_set)
		return (NULL);
	str_set[0] = c;
	str_set[1] = '\0';
	return (str_set);
}


char	**ft_split(char const *s, char c)
{
	char	**tokens;
	const char	*trimmed;
	const char	*cursor;
	char		*set_trim;
	size_t		x;

	x = 0;
	set_trim = to_str(c);
	trimmed = ft_strtrim(s, set_trim);
	if (!trimmed || !s)
		return (NULL);
	cursor = trimmed;
	tokens = malloc(ft_strlen(trimmed) * (sizeof(char) + 4));
	while (*trimmed)
	{
		trimmed = calc_len_token(trimmed , c);
		tokens[x] = malloc((trimmed - cursor) * (sizeof(char) + 4));
		write_in_x_y(tokens, x ,trimmed , cursor , c);
		cursor = trimmed;
		x++;
	}
	tokens[x] = NULL;
	free(set_trim);
	return (tokens);
}


// char		*trim_before_split(char const *str, char const c){
// 	char	*a;
// 	char	*trimmed;

// 	a = malloc(sizeof(char) * 2);	
// 	a[0] = c ;
// 	a[1] = '\0';
// 	trimmed = ft_strtrim(str,a);

// 	return (trimmed);
// }


// char **ft_split(char const *s, char c)
// {
// 	char	**phrases;
// 	char	*d;
// 	size_t		i;
// 	size_t		y;
// 	size_t		x;

// 	i = 0;
// 	d = trim_before_split(s, c);
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] == c)
// 		{
// 			y++;
// 			x = 0;
// 		}
// 		phrases[y] ==
// 		i++;
// 	}
// 	return (phrases);
// }

// int		main()
// {

// 	char *s1 = "--1-2--3---4----5-----42";	
// 	char	c = '-';
// 	char	**damn;

	
// 	damn = ft_split(s1, c);

// 	free(damn[0]);
// 	free(damn[1]);
// 	free(damn[2]);
// 	free(damn[3]);
// 	free(damn[4]);
// 	free(damn[5]);
// 	free(damn[6]);
// 	free(damn);
// }