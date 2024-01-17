#include <stdio.h>

int main (){
    int n;
    int i = 2;

    printf("Inserisci un numero:\n");
    scanf("%d", &n);
    while(n%i!=0){
        i++;
    }
    if (n==i){
        printf("Il numero è primo.\n");
    }
    else{
        printf("Il numero non è primo.\n");
    }
    return 0;
}