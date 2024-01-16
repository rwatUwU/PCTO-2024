#include <stdio.h>

int main (){
float a;
float kelvin = a + 273.15;
float fahrenheit = a * 9/5 + 32;
printf("Inserisci una temperatura in Celsius:\n");
scanf("%f", &a);
if (a<-273.15){
    printf("Il valore non è accettabile.\n");
}else{
printf("Temperatura in Kelvin: %f\n", kelvin);
printf("Temperatura in Fahrenheit: %f\n", fahrenheit);
}
return 0;
}