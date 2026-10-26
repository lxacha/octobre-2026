#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		y;
	int		x;
	char	*cop;

	y = 0;
	i = 0;
	x = 0;
	while(s1[i] != '\0')
		i++;
	cop = malloc(sizeof(char) * i);
	i = 0;
	while (s1[i] != '\0')
	{
		while (set[y] != '\0')
		{
			if (s1[i] == set[y])
				i++;
			y++;
		}
		cop[x] = s1[i];
		y = 0;
		i++;
		x++;
	}
}

int		main()
{
	char	*s1 = "this is the@life we# live";
	char	*char_rm = "#@";
	char	*copy;

	copy = ft_strtrim(s1, char_rm);
	free(copy);
}