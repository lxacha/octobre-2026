#include <stdio.h>

void ft_memmove(char *dest, char *src ,int n_size){
    char dup_src[300] = "duplicate_source";
    int     i;

    i = 0;
    while (src[i] != '\0'){
        dup_src[i] = src[i];
        i++;
    }
    dup_src[i] = '\0';

}

int main(){
    char    dest[20] = "destination";
    char    src[20] = "source";
    int     size_n = 4;
}