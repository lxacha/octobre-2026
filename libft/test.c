#include <stdio.h>
#include <ctype.h>

int main(int argc,char **argv){
//    printf("%s",argv[1]);
    printf("%d",isascii(argv[1][0]));

    return 0;
}