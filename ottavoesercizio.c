#include <stdio.h>

int main (){
    float a;
    float b;
    float c;

    printf("Inserisci il primo numero:\n");
    scanf("%f", &a);
    printf("Inserisci il secondo numero:\n");
    scanf("%f", &b);
    printf("Inserisci il terzo numero:\n");
    scanf("%f", &c);
    if (a-b == b-c){
        printf("I tre numeri formano una progressione aritmetica.\n");
    }
    else{
        printf("I tre numeri non formano una progressione aritmetica.\n");
    }
    return 0;
}