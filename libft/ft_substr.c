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

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*to_ret;
	char	*cursor;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	else
	{
		s += start;
		if (len > s_len - start)
			len = s_len - start;
	}
	to_ret = malloc(len + 1);
	if (!to_ret)
		return (NULL);
	cursor = to_ret;
	while (len--)
		*cursor++ = *s++;
	*cursor = '\0';
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