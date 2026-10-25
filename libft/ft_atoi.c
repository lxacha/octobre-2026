
int ft_atoi(const char *nptr){
    int     i;
    int     y;
    int     converted;


    i = 0;
    y = 1;
    converted = 0;

    while (nptr[i] != '\0'){
        if (nptr[i] >= 48 && nptr[i] <= 57){
            converted = (converted * y ) + nptr[i] - '0';
            if (y == 1)    
                y = y * 10;
        }
        else {
            break ;
        }
        i++;
    }
    return converted;
}

int main(){
    char    *phrase = "302ssd";

    ft_atoi(phrase);
}