#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd,&c,1);
}

int		main()
{
	char	a;
	a = 'B';
	ft_putchar_fd(a, 1);
}