#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	free(s);
}
// int	main()
// {
// 	int		a;
// 	a = 777;
// 	ft_putnbr_fd(a, 1);
// }