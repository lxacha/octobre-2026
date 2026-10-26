#include <stdlib.h>
#include <stdio.h>

char 	*ft_itoa(int n){
	int		y;
	int		d;
	char	*s;

	y = 0;
	d = 1;
	while ( n != 0)
	{
		y = y + ((n%10) * d);
		n = n/10;
		d = d * 10;
	}
}

int		main(){
	int		a;

	a = 234;
	ft_itoa(a);
}