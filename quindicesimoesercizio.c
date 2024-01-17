#include <stdio.h>

int main (){
    int n;
    int i=2;
        
    printf("inserisci un numero:\n");
    scanf("%d", &n);
    if(n==1){
        printf("è un numero primo\n");
    }
    else{
        while(n%i!=0){
            i = i+1;
        }
        if(n==i){
            printf("è un numero primo\n");
        }else{
            printf("non è un numero primo\n");
        }
    }
    return 0;
}
