
#include <stdio.h>

int main(int argc, char **argv){

    int     a;

    a = argv[1];

    if ((a >= 33 && a<= 126)){
        printf("a \n");
        return 1;
    }
    printf("b \n");
    return 0;
}