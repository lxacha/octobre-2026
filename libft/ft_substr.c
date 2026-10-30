#include <stdlib.h>
#include "libft.h"


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned long		i;
	char	*a;
	i = 0;
	a = malloc(sizeof(char) * len + 1);
	if (len <= 0)
	{
		a = "";
		return (a);
	}
	while (i < len)
	{
		a[i] = s[i+start];
		i++;
	}
	a[i] = '\0';
	return (a);
}

// int main()
// {
// 	int		subs_start;
// 	int		subs_end;
// 	char	*phrase1 = "phrase n 1";

// 	subs_start = 7;
// 	subs_end = 3;
// 	ft_substr(phrase1, subs_start, subs_end);
// }
