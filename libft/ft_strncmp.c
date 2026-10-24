#include <stdio.h>

int    ft_strncmp(const char *s1, const char *s2 , size_t n){
        int     i;
        int     y;
        
        i = 0;
        y = 0;
        while (i != n){
            y = y + (s1[i] - s2[i]);
            i++;
        }
        return y;
}

int main(){
    char    phrase1[10] = "unicorn";
    char    phrase2[10] = "horse";
    char    phrase3[10] = "unilateral";
    char    phrase4[10] = "unicad";

    ft_strncmp(phrase1,phrase2,4);

    return 0;
}