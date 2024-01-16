#include <stdio.h>

int main (){
    int b;
    int a;
    printf("A quanti anni si può prendere la patente nel tuo paese?\n");
    scanf("%d", &b);
    printf("Quanti anni hai?\n");
    scanf("%d", &a);
    if (a>=b){
        printf("Puoi prendere la patente\n");
    } else 
        printf("Non puoi predere la patente\n");
return 0;
}