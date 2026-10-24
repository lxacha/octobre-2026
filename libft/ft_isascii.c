#include <stdio.h>

int main(int argc,char **argv){
    int     a;
    a = argv[1][0];

    if ((a >= 0 && a<= 127)){
        printf("a \n");
        return 1024;
    }
    printf("b \n");
    return 0;
}