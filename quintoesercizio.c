#include <stdio.h>

int main (){
    int b;
    printf("A quanti anni si può prendere la patente nel tuo paese?\n");
    scanf("%d", &b);
    int a;
    printf("Quanti anni hai?\n");
    scanf("%d", &a);
    if (a>=b){
        printf("Puoi prendere la patente\n");
    } else 
        printf("Non puoi predere la patente\n");
return 0;
}