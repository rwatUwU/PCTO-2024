#include <stdio.h>

int main(){
    int number;
    float temp, sqrt;

    printf("Inserisci un numero: \n");
    scanf("%d", &number);
    sqrt = number / 2;
    temp = 0;
    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( number/temp + temp) / 2;
    }
    printf("La radice quadrata di %d è %f.\n", number, sqrt);
    return (0);
}