#include <unistd.h>
#include "libft.h"

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

// int main()
// {
// 	char *s1 = "Time is running out!!!";
// 	ft_putendl_fd(s1, 1);
// }