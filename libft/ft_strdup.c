#include <stdlib.h>

int		ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc(sizeof(char) * ft_strlen(s));
	while (s[i] != '\0'){
		dup[i] = s[i];
		i++;
	}
	return (dup);
}

int main()
{
	char	*s1 = "phrase 1";
	char	*s2;

	s2 = ft_strdup(s1);
	free(s2);
}