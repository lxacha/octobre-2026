int		ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	function_n_2(unsigned int d, char *a)
{
	if (a[d] == 'A')
		a[d] = 'B';
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{	
		f(i,s);
		i++;
	}
}

int		main()
{

}