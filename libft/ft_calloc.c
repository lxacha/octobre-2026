#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*poin;
	
	if (size >= 2147483647 / nmemb)
		return (NULL);
	else if (nmemb * size == 0)
		poin = malloc(0);
	else
		poin = malloc(nmemb * size);
	if (!poin)
		return (NULL);
	ft_bzero(poin, size * nmemb);
	return (poin);
}

// avec bzero , ecrire dans l'espace allouer
/*
int	main(){
	void	*pointer;

	pointer = ft_calloc(3,12);
	free(pointer);
	return (0);
}
*/