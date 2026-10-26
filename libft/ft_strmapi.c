#include <stdlib.h>

static int		ft_strlen(const char *s)
{
	int		i;
	i = 0;

	while(s[i] != '\0')
		i++;
	return (i);
}

static char	function_n_1(unsigned int d,char a)
{
	a = 'B';
	return a;
}

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

int main(){
	char	*a = "AAAAAAAAAA";
	ft_strmapi(a,function_n_1);
}