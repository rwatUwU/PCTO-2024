#include <stdio.h>

int main (){
    float a;
    float kelvin;
    float fahrenheit;

    printf("Inserisci una temperatura in Celsius:\n");
    scanf("%f", &a);
    kelvin = a + 273.15;
    fahrenheit = (a * 1.8 )+ 32;
    if (a<-273.15){
        printf("Il valore non è accettabile.\n");
    }
    else{
        printf("Temperatura in Kelvin: %f\n", kelvin);
        printf("Temperatura in Fahrenheit: %f\n", fahrenheit);
    }
    return 0;
}