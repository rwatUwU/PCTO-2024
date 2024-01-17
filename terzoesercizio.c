#include <stdio.h>

int main (){
    long double n;
    long double m;

    printf("Inserisci il primo numero:\n");
    scanf("%Lf", &n);
    printf("Inserisci il secondo numero:\n");
    scanf("%Lf", &m);
    printf("La loro somma è: %Lf\n", n+m);
    return 0;
}