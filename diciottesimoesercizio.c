#include <stdio.h>

float radice (float delta){
    float temp, sqrt;

    sqrt = delta / 2;
    temp = 0;
    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( delta/temp + temp) / 2;
    }
    return (sqrt);
} 

float main (){
    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;

    printf("Inserisci il coefficente di secondo grado (a):\n");
    scanf("%f", &a);
    printf("Inserisci il coefficente di primo grado (b):\n");
    scanf("%f", &b);
    printf("Inserisci il coefficente di grado zero (c):\n");
    scanf("%f", &c);
    delta=(b*b)-(4*a*c);
    if(delta>0){
        x1=(-b+radice(delta))/(2*a);
        x2=(-b-radice(delta))/(2*a);
        printf("Le soluzioni dell'equazione sono: %f e %f\n", x1, x2);
    }
    else if(delta=0){
        x1=x2=-b/2*a;
        printf("La soluzione dell'equazione è: %f\n", x1);
    }
    else{
        printf("L'equazione non ammette soluzioni reali.\n");
    }
    return 0;
}