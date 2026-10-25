#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n){
    int     i;
    unsigned char *b;

    i = 0;
    b = NULL;
    while (i != n){
        
        if (((unsigned char *)s)[i] == (unsigned char )c){
            b = (unsigned char *)&s[i];
            break ;
        }
        n++;
        i++;
    }
    return b;
}

int main(){
    char    *str_1 = "where is the damn dog";
    char    a;
    int     size_a;

    size_a = 4;
    a = 'a';
    ft_memchr(str_1, a, size_a);

    return 0;
}