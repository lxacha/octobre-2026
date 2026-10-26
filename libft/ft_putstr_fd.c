#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd,&s[i],1);
		i++;
	}
}

int main()
{
	char *s1 = "fuck taxes , fuck corpos, to the top of arasaka tower !";
	ft_putstr_fd(s1, 1);
}