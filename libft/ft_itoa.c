#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

// char 	*ft_itoa(int n)
// {
// 	int		i;
// 	int		y;
// 	char	*s;
// 	char	*final_s;

// 	i = 0;
// 	y = 0;
// 	s = malloc(sizeof(char) * n);
// 	final_s = malloc(sizeof(char) * n);
// 	while ( n != 0)
// 	{
// 		s[i] = (n%10) + '0';
// 		n = n/10;
// 		i++;
// 	}
// 	i--;
// 	while (i != -1)
// 	{
// 		final_s[y] = s[i];
// 		y++;
// 		i--;
// 	}
// 	return (final_s);
// }

// int		main(){
// 	int		a;

// 	a = 234;
// 	ft_itoa(a);
// }