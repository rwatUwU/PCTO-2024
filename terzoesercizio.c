#include <stdio.h>

int main (){
    long double n;
    long double m;
    printf("Inserisci il primo numero:\n");
    scanf("%Lf", &n);
    printf("Inserisci il secondo numero:\n");
    scanf("%Lf", &m);
    long double sum = m+n;
    printf("La loro somma è: %Lf\n", sum);
    return 0;
}