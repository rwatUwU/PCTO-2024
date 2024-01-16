#include <stdio.h>

int main (){
    int a;
    int b;
    printf("Inserisci il primo numero\n");
    scanf("%d", &a);
    printf("Inserisci il secondo numero\n");
    scanf("%d", &b);
    if (a%b==0){
        printf("%d è multiplo di %d\n", a,b);
    }else{
        printf("%d non è multiplo di %d\n", a,b);
    }
}