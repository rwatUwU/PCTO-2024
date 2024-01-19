#include <stdio.h>

int main (){
    int i;
    char stringa[100];

    printf("Inserisci un testo in minuscolo: ");
    printf("%s \n", stringa);
    scanf("%s[^\t\n]", stringa);
    i = 0;
    while (stringa[i] != '\0'){
        if (97 <= stringa[i] && stringa[i] <=122){
        stringa[i] = stringa[i] - 32;
        }
        i = i + 1;
    }
    printf("%s \n", stringa);
    return (0);
}