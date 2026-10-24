#include <stdio.h>

int ft_toupper (int c){
    if (c >= 97 && c <= 122)
    {
        c = c - 32;
    }
    return c;
}

int main(){
    char    a;
    a = 'a';

    printf("%d",ft_toupper(a));

}