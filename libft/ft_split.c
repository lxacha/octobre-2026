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

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	**free_all(char **tokens, size_t n)
{
	while (n--)
		free(tokens[n]);
	free(tokens);
	return (NULL);
}

static char	**fill_tokens(char **tokens, const char *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (len)
		{
			tokens[i] = ft_substr(s, 0, len);
			if (!tokens[i])
				return (free_all(tokens, i));
			i++;
		}
		s += len;
	}
	tokens[i] = NULL;
	return (tokens);
}

char	**ft_split(char const *s, char c)
{
	char	**tokens;

	if (!s)
		return (NULL);
	tokens = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!tokens)
		return (NULL);
	return (fill_tokens(tokens, s, c));
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