#include <stdlib.h>
#include "libft.h"


char **ft_split(char const *s, char c)
{
	char	**phrases;
	int		i;
	int		y;
	int		d;
	int		m;

	i = 0;
	y = 0;
	d = 0;
	m = ft_strlen(s);
	phrases = malloc(sizeof(char *) * (m + 10));
	while (s[i] != '\0')
	{
		phrases[y] = malloc(sizeof(char *) * (m + 10));
		while (s[i] != c && s[i+1] != '\0'){
			phrases[y][d] = s[i];
			d++;
			i++;
		}
		phrases[y][d] = '\0';
		d = 0;
		y++;
		i++;
	}
	return (phrases);
}

// int		main()
// {
// 	char *s1 = "this is ,phrase one, phrase two , ...";	
// 	char	c = ',';
// 	char	**damn;

	
// 	damn = ft_split(s1, c);

// 	free(damn);

// }