#include <stdio.h>

void ft_memcpy(char *dest,char *src,int size_n){
    int     i;

    i = 0;

    while (size_n != 0){

        dest[i] = src[i];

        i++;
        size_n--;
    }
    printf("%c \n",dest[0]);
    printf("%c \n",src[0]);

/*
    while (size_n != 0){
        size_n --;
    }
*/
}

int main(){

    char    *dest;
    char    *src;
    int     n_bytes;

    n_bytes = 4;
    dest = "destination";
    src = "sourceeeeee";

    ft_memcpy(dest, src, n_bytes);

}