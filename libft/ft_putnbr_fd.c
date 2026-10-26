#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char 	*ft_itoa(int n){
	int		i;
	int		y;
	char	*s;
	char	*final_s;

	i = 0;
	y = 0;
	s = malloc(sizeof(char) * n);
	final_s = malloc(sizeof(char) * n);
	while ( n != 0)
	{
		s[i] = (n%10) + '0';
		n = n/10;
		i++;
	}
	i--;
	while (i != -1)
	{
		final_s[y] = s[i];
		y++;
		i--;
	}
	return (final_s);
}

void ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	*s_i;

	i = 0;
	s_i = ft_itoa(n);
	while (s_i[i] != '\0')
	{
		write(fd,&s_i[i],1);
		i++;
	}
}
int	main()
{
	int		a;
	a = 777;
	ft_putnbr_fd(a, 1);
}