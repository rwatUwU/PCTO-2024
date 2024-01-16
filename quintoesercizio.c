#include <stdio.h>

int main (){
    int a;
    int b;
    printf("A quanti anni si può prendere la patente nel tuo paese?\n");
    scanf("%d", &a);
    printf("Quanti anni hai?\n");
    scanf("%d", &b);
    if (b>=a){
        printf("Puoi prendere la patente.\n");
    } else 
        printf("Non puoi predere la patente.\n");
return 0;
}