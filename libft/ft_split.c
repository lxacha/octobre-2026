// #include <stdlib.h>
// #include "libft.h"

//char		*trim_before_split(char const *str, char const c){
//{
	// declare tokens[][];
	// check if str !NULL;
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
// 	char *s1 = ",,,,,this is ,phrase one, phrase two , ...,,,,,";	
// 	char	c = ',';
// 	char	**damn;

	
// 	damn = ft_split(s1, c);

// 	free(damn);

// }