#include <stdio.h>

void calcolaCubo(){
    float cubo;
    float numero;

    printf("Inserisci un numero:\n");
    scanf("%f", &numero);
    cubo=numero*numero*numero;
    printf("Il cubo di %f è %f.\n", numero, cubo);
}

int main (){
    calcolaCubo();
    calcolaCubo();
    calcolaCubo();
    calcolaCubo();
    return 0;
}