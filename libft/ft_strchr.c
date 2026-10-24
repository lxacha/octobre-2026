#include <stdio.h>

char ft_strchr(char *str, int c){
    char    *point_f;
    int     i;

    i = 0;
    while (str[i] != '\0'){
        if (str[i] == c){
            point_f = &str[i];
            break;
        }
        i++;
    }
    return *point_f;
}

int main(){
    char    str1[20] = "str nbr 1 ...";
    char    a;

    a = 'n';
    ft_strchr(str1,a);
}