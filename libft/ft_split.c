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
	while (*str == sep)
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
		if (*cursor == c)
			break ;
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
	char		**tokens;
	const char	*trimmed;
	const char	*cursor;
	char		*set_trim;
	size_t		x;

	x = 0;
	set_trim = to_str(c);
	if (!s)
		return (NULL);
	trimmed = ft_strtrim(s, set_trim);
	char *test = (char *)trimmed;
	cursor = trimmed;
	tokens = malloc((ft_strlen(trimmed) + 4) * (sizeof(char *) + 4));
	if (!tokens)
		return (NULL);
	while (*trimmed)
	{
		trimmed = calc_len_token(trimmed , c);
		tokens[x] = malloc((trimmed - cursor) * (sizeof(char) + 4));
		write_in_x_y(tokens, x ,trimmed , cursor , c);
		cursor = trimmed;
		x++;
	}
	tokens[x] = '\0';
	free(set_trim);
	free(test);
	return (tokens);
}


// char	**ft_split(lalala les args)
// {
// 	if (!s)
// 		return (NULL);
// 	int words = compte_mots();
// 	char	**ret = ft_calloc(words + 1, sizeof(char *));
// 	if (!ret)
// 		return (NULL);
// 	int word = 0;
// 	for (int i = 0; s[i]; ++i)
// 	{
// 		ignorer sep;
// 		point de depart save;
// 		ignore les non seps;
// 		point de end;
// 		ret[word] = ft_substr(point de depart, point de end - point de start);
// 		if (!ret[word++])
// 		{
// 			tout free ! (char ** et char * precedents);
// 			return (NULL);
// 		}
// 	}
// 	return (ret);
// }

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

// #include <stdio.h>
// int main()
// {
// 	char	**test = ft_split("a", ',');
// 	if (!test)
// 		return (1);
// 	for (int i = 0; test[i]; ++i)
// 		printf("%s\n", test[i]);
// 	for (int i = 0; test[i]; ++i)
// 		free(test[i]);
// 	free(test);
// 	return (0);
// }