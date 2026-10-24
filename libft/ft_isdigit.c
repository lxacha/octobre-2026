#include <ctype.h>
#include <stdio.h>

int main(int argc,char **argv){
    int     a;

    a = *argv[1];

    if ((a >= 48 && a<= 57)){
        printf("a \n");
        return 1024;
    }
    else{
        printf("b \n");
        return 0;
    }
}
