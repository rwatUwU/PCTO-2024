#include <stdio.h>

int main (){
    int a;
    
    printf("Inserisci un anno:\n");
    scanf("%d", &a);
    if (a%4==0){
        if(a%100!=0){
            printf("L'anno è bisestile.\n");
        }else if(a%400==0){
            printf("L'anno è bisestile.\n");
        }else{
            printf("L'anno non è bisestile.\n");
        }
    }else{
        printf("L'anno non è bisestile.\n");
    }
    return 0;
}