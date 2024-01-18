#include <stdio.h>

int main (){
    char lettera;
    char a='a', e='e', i='i', o='o', u='u';

    printf("Inserisci una lettera:\n");
    scanf("%c", &lettera);
    if ((lettera==a)||(lettera==e)||(lettera==i)||(lettera==o)||(lettera==u)){
        printf("La lettera %c è una vocale.\n", lettera);
    }
    else{
        printf("La lettera %c è una consonante.\n", lettera);
    }
    return 0;
}