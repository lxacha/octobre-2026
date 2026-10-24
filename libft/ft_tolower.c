#include <stdio.h>

int ft_tolower(int c){
        if (c >= 65 && c <= 90)
    {
        c = c + 32;
    }
    return c;
}
 
int main(){
    char    a;
    a = 'A';

    printf("%d",ft_tolower(a));
}