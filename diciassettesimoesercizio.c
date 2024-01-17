#include <stdio.h>

int main (){
    int n;
    int i=0;
    int sum;
    int d;

    printf("Inserisci un numero:\n");
    scanf("%d", &n);
    d=1;
    while(n>=0){
        if(n>=0){
            sum=i+n;
            printf("La media è: %d\n", (sum/d));
            d=d+1;
            printf("Inserisci un altro numero:\n");
            scanf("%d", &i);
        }
        else{
            printf("Il numero é negativo.\n");
        }
    }
    return 0;
}