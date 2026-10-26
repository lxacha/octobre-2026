#include <stdlib.h>
#include "libft.h"


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*a;
	i = 0;
	a = malloc(sizeof(char) * len);
	while (i < len)
	{
		a[i] = s[i+start];
		i++;
	}
	return (a);
}

int main()
{
	int		subs_start;
	int		subs_end;
	char	*phrase1 = "phrase n 1";

	subs_start = 7;
	subs_end = 3;
	ft_substr(phrase1, subs_start, subs_end);
}
