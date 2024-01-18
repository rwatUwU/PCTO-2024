#include <stdio.h>

int main (){
    char stringa[4];

    printf("Scrivi qualcosa in minuscolo:\n");
    scanf("%s", stringa);
    stringa[0]= stringa[0] - 32;
    printf("%s\n", stringa);
    return 0;
}