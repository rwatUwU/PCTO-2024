#include <stdio.h>

int main (){
    float n;
    float i = 0;
    float s = 0;
    float m;

    while (n >= 0){
        printf ("Inserisci un numero:\n ");
        scanf ("%f", &n);
        if (n >= 0){
            s = s + n;
            i = i + 1;
            m = s / i;
            printf("La media è: %f\n", m);
        }
        else{
            printf("Il numero è negativo.\n");
        }
    } 
    return 0;
}
