#include <stdio.h>

void    *ft_memchr(const void *s, int c, size_t n){
        int     i;
        char    *poin;

        i = 0;
        poin = '\0';
        while (i != n){
            if(((unsigned char *)s)[i] == (char)c){
                poin = (char *)&s[i];
                break ;
            }
            i++;
        }
        return poin;
}

int     main(){
    char    str[20] = "where da damn dawg";
    char    a;

    a = 'a';
    ft_memchr(str, a, 9);
}