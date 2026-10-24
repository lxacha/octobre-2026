#include <stdio.h>

void ft_bzero(char *a,int n){

    while(n != 0){
        a[0] = '\0';
        a++;
        n--;
    }

}

int main(int argc, char **argv){
    char    *a;
    int     n;

    n = 4;
    a = argv[1];
    ft_bzero(a,n);
    printf("%s",a);
    
    return 0;
}