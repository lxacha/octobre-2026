#include <stdlib.h>
#include "libft.h"

// static char	function_n_1(unsigned int d,char a)
// {
// 	a = 'B';
// 	if (d >= 0)
// 	{
// 		return a;
// 	}
// 	return a;
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		i;

	i = 0;
	new_str = malloc(sizeof(char) * ft_strlen(s));
	while(s[i] != '\0')
	{
		new_str[i] = f(i,s[i]);
		i++;
	}
	return (new_str);
}

// int main(){
// 	char	*a = "AAAAAAAAAA";
// 	ft_strmapi(a,function_n_1);
// }