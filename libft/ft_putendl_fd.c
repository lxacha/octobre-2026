#include <unistd.h>
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
	return (s);
}

void ft_putendl_fd(char *s, int fd)
{
	int 	i;
	i = 0;
	
	while (s[i] != '\0')
	{
		write(fd,&s[i],1);
		i++;
	}
	write(fd,"\n",1);
}

int main()
{
	char *s1 = "Time is running out!!!";
	ft_putendl_fd(s1, 1);
}