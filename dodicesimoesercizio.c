#include <stdio.h>

int main (){
    int a;
    int b;
    int c;

    printf("Inserisci la tua data di nascita:\n");
    scanf("%d", &a);
    b=a-1969;
    c=1969-a;
    if (a==1969){
        printf("L'allunaggio è avvenuto nel tuo anno di nascita.\n");
        }else if(a>1969){
            printf("Sei nato %d anni dopo l'allunaggio.\n", b);
    }else{
        printf("Sei nato %d anni prima dell'allunaggio.\n", c);
    }
return 0;
}