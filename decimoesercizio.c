#include <stdio.h>

int main (){
    float a;
    float b;
    float c;

    printf("Inserisci la misura del primo segmento:\n");
    scanf("%f", &a);
    printf("Inserisci la misura del secondo segmento:\n");
    scanf("%f", &b);
    printf("Inserisci la misura del terzo segmento:\n");
    scanf("%f", &c);
    if (a+b>c){
        if (b+c>a){
        }
        if (a+c>b){
                printf("I tre segmenti possono formare un triangolo.\n");
        }
    }
    else{
        printf("I tre segmenti non possono formare un triangolo\n");
    }
    return 0;
}