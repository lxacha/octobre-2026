#include <stdio.h>
char ft_strrchr(const char *s, int c){
    int     i;
    char    *d;

    i = 0;
    while (s[i] != '\0')
        i++;
    while (i != 0){
        if (s[i] == c){
            d = (char *)&s[i];
            break ;
        }
        i--;
    }
    return d;

}

int main(){
    char    src[20] = "source";
    char    a;

    a = 'r';

    ft_strrchr(src , a);
}