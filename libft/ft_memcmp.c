#include <stdlib.h> /// ne pas rendre tel quel, include dans le fichier header 

int ft_memcmp(const void *s1, const void *s2, size_t n){
    int     i;
    int     eq;

    i = 0;
    eq = 0;
    while (i != n){
        eq = eq + (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
        i++;
    }
    return eq;
}

int main(){
    char    *a = "hello everyone ,";
    char    *b = "i wish i were a bird";
    char    *c = "hell to everyone ";

    int     size_b = 4;
    
    ft_memcmp(a, b, size_b);

    return 0;
}