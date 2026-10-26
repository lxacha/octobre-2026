#include <stdlib.h>

int		ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *conc_s1_s2;
	int		i;
	int		y;
	
	i = 0;
	y = ft_strlen(s1) + ft_strlen(s2);
	conc_s1_s2 = malloc(sizeof(char) * y);
	y = 0;
	while (s1[i] != '\0')
	{
		conc_s1_s2[i] = s1[i];
		i++;
	}
	while (s2[y] != '\0')
	{
		conc_s1_s2[i] = s2[y];
		i++;
		y++;
	}
	return (conc_s1_s2);
}

int	main()
{
	char	*s1 = "phrase n1";
	char	*s2 = " phrase n2";
	
	ft_strjoin(s1, s2);
	return (0);
}