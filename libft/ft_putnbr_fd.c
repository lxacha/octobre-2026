#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

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
// int	main()
// {
// 	int		a;
// 	a = 777;
// 	ft_putnbr_fd(a, 1);
// }