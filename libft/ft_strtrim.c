
#include "libft.h"
#include <stdlib.h>

size_t		start_ite(char const *s1B, char const *setB, size_t start_ind)
{
	size_t		y;
	size_t		ite_charB;
	size_t		i;

	y = 0;
	i = start_ind;
	ite_charB = 0;

	while (setB[y]!= '\0')	
	{
		if (s1B[i] == setB[y])
		{
			ite_charB++;
			i++;
			y = 0;
			continue;
		}
		y++;
		if (setB[y] == '\0')
		{
			break;
		}
	}
	return ite_charB;
}
size_t		start_end(char const *s1C, char const *setC, size_t end, size_t ind_end_st)
{
	size_t		y;
	size_t		i;

	y = 0;
	i = end-1;

	while (i != 0)	
	{
		if (s1C[i] == setC[y])
		{
			end--;
			i--;
			y = 0;
			continue;
		}
		if (i <= ind_end_st || setC[y] == '\0')
		{
			return(end);
		}
		y++;
	}
	return 0;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		y;
	size_t		ite_char;
	size_t		end;
	char	*cop;
	
	i = 0;
	y = 0;
	end = ft_strlen(s1);
	ite_char = start_ite(s1 , set , i) ;
	i = start_end(s1 , set, end, ite_char);
	// function count ite_char remaining in end if there is otherw = NULL;
	cop = malloc(sizeof(char) * (i - ite_char) + 1);
	while (ite_char < i)
	{
		if (ft_strlen(s1) == 0)
			break;
		cop[y] = s1[ite_char];
		y++;
		ite_char++;		
	}
	cop[y] = '\0';
	return cop;
}


// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t		i;
// 	size_t		y;
// 	size_t		x;
// 	size_t		bool1;
// 	char	*cop;

// 	y = 0;
// 	x = 0;
// 	bool1 = 0;
// 	i = ft_strlen(s1);
// 	cop = malloc(sizeof(char) * i);
// 	i = 0;
// 	while (s1[i] != '\0')
// 	{
// 		while (set[y] != '\0' )
// 		{
// 			if (s1[i] == set[y] && bool1 == 0)
// 			{
// 				i++;
// 				y=0;
// 			}
				
// 		}
// 		y++;
// 		cop[x] = s1[i];
// 		i++;
// 		x++;
// 	}
// 	cop[x]= '\0';
// 	return (cop);
// }

// int		main()
// {
// 	char	*s1 = "";

// 	char	*char_rm = "123";
// 	char	*copy;

// 	copy = ft_strtrim(s1, char_rm);
// 	free(copy);
// }