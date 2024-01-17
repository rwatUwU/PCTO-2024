#include <stdio.h>

int main (){
    long double n1;
    long double n2;

    printf("Inserisci il primo numero:\n");
    scanf("%Lf", &n1);
    printf("Inserisci il secondo numero:\n");
    scanf("%Lf", &n2);
    if (n1>n2){
        printf("%Lf è maggiore di %Lf\n", n1,n2);
    }
    else if (n1<n2){
        printf("%Lf è minore di %Lf\n", n1,n2);
    }
    else{
        printf("%Lf è uguale a %Lf\n", n1,n2);
    }
    return 0;
}