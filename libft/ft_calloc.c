#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*poin;
	
	// check separtly if nmemb of size is equal to zero before check siz >

	if (nmemb == 0 || size == 0){
		poin = malloc(0);
		return (poin);
	}
	if (size >= (size_t)-1 / nmemb)//size_t -1 
		return (NULL);
	else
		poin = malloc(nmemb * size);
	if (!poin)
		return (NULL);
	ft_bzero(poin, size * nmemb);
	return (poin);
}

// avec bzero , ecrire dans l'espace allouer

// int	main(){
// 	void	*pointer;

// 	pointer = ft_calloc(0,12);
// 	free(pointer);
// 	return (0);
// }
