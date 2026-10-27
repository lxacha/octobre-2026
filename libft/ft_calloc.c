#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*poin;
	
	if (nmemb == 0 || size == 0)
		return NULL;
	poin = malloc(nmemb * size);
	return (poin);
}
/*
int	main(){
	void	*pointer;

	pointer = ft_calloc(3,12);
	free(pointer);
	return (0);
}
*/