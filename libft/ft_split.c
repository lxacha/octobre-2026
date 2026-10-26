#include <stdlib.h>

int		ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while(s[i] != '\0')
		i++;
	return (i);
}

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

		while (s[i] != c && s[i] != '\0'){
			phrases[y][d] = s[i];
			d++;
			i++;
		}
		d = 0;
		y++;
		i++;
	}
	return (phrases);
}

int		main()
{
	char *s1 = "this is ,phrase one, phrase two , ...";	
	char	c = ',';
	ft_split(s1, c);
}