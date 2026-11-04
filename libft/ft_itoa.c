#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

#include "libft.h"

static size_t	count_len(long n)
{
	size_t	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	nb;
	size_t	len;

	nb = n;
	len = count_len(nb);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	s[--len] = (nb % 10) + '0';
	nb /= 10;
	while (nb > 0)
	{
		s[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (s);
}