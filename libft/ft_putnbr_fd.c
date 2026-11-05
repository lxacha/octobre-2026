#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

#include "libft.h"

#include <unistd.h>

int helper_neg_0(int n, int fd)
{
	if ( n == 0)
		write(fd,"0",1);
	if ( n < 0)
	{
		n = n * -1;
		write(fd,"-",1);
	}
	return n;
}

void	print_zeroes(int nb_zeroes, int fd)
{
	while (nb_zeroes != 0)
	{
		nb_zeroes--;
		write(fd,"0",1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int	dec;
	char print;
	int		nb_zero;

	dec = 1;
	print = 0;
	nb_zero = 0;
	n = helper_neg_0(n , fd);
	if ( n != 0)
		while (n % 10 == 0 )
			{
				n /= 10;
				nb_zero++;
			}
	while ( dec * 10 < n )
		dec *= 10;
	while (n != 0)
	{
		print = (n / dec) + '0';
		write (fd,&print,1);
		n = n -((n / dec) * dec);
		dec /= 10;
	}
	print_zeroes(nb_zero , fd);
}



// void	ft_putnbr_fd(int n, int fd)
// {
// 	char	*s;

// 	s = ft_itoa(n);
// 	if (!s)
// 		return ;
// 	write(fd, s, ft_strlen(s));
// 	free(s);
// }
// int	main()
// {
// 	int		a;
// 	a = 777;
// 	ft_putnbr_fd(a, 1);
// }