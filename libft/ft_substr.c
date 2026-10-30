#include <stdlib.h>
#include "libft.h"
#include <stdio.h>


// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	unsigned long		i;
// 	char	*a;
// 	i = 0;
	
// 	if (len == 0 || start > (unsigned int)ft_strlen(s))
// 	{
// 			a = malloc(sizeof(char) * 1);
// 			a[0] = 0;
// 			return(a);
// 	}	
// 	a = malloc(sizeof(char) * len + 1);
// 	if (!a)
// 		return (NULL);
// 	while (i < len && s[i+start])
// 	{
// 		a[i] = s[i+start];
// 		i++;
// 	}
// 	a[i] = '\0';
// 	return (a);
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*to_ret;
	const char	*stop;
	char	*cursor;
	
	to_ret = NULL;
	if (len == 0 || start > (unsigned int)ft_strlen(s))
	len = 0;
	to_ret = malloc(sizeof(char) * (len + 1));
	if (to_ret)
	{
		s += start;
		cursor = to_ret;
		stop = s + len;
		while (len-- && cursor != stop && *s)
			*cursor++  = *s++;
		*cursor = 0;
	}
	return (to_ret);
	
}
// int	main(int ac, char **argv)
// {
// 	char	*a;

// 	a = ft_substr(argv[1], atoi(argv[2]), atoi(argv[3]));
// 	if (ac != 4)
// 		return (1);
// 	else
// 		printf("%s\n", a);
// 	free(a);
// }