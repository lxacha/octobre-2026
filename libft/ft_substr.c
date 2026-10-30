#include <stdlib.h>
#include "libft.h"
#include <stdio.h>


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned long		i;
	char	*a;
	i = 0;
	
	if (len <= 0 || start > (unsigned int)ft_strlen(s))
	{
		a = "";
		return (a);
	}
	a = malloc(sizeof(char) * len + 10);
	while (i < len && s[i+start])
	{
		a[i] = s[i+start];
		i++;
	}
	a[i] = '\0';
	return (a);
}

int main()
{
	int		subs_start;
	int		subs_end;
	char	*phrase1 = "phrase n 1";

	subs_start = 7;
	subs_end = 1;
	printf("%s",ft_substr(phrase1, subs_start, subs_end));
}
