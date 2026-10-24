#include <stdio.h>

int main(int argc,char **argv){
        int     a;

        a = 0;
        while (argv[1][a] != '\0')
            a++;
        printf("%d",a);
        return a;
    
}