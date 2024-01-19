#include <stdio.h>

char operatore (){
    char simbolo;

    printf("Seleziona un operatore (+ - * /):\n");
    scanf(" %c", &simbolo);
    while((simbolo!='+')&&(simbolo!='-')&&(simbolo!='*')&&(simbolo!='/')){
        printf("\n\nIl carattere digitato non è un operatore, riprova.\n");
        printf("Seleziona un operatore (+ - * /):\n");
        scanf(" %c", &simbolo);
    }
    return(simbolo);
}

long double main (){
    long double x;
    long double y;

    printf("Inserisci il primo numero:\n");
    scanf("%Lf", &x);
    printf("Inserisci il secondo numero:\n");
    scanf("%Lf", &y);
    if (operatore()=='+'){
        printf("La loro somma è: %Lf\n", x+y);
    }
    else if(operatore()=='-'){
        printf("La loro differenza è: %Lf\n", x-y);
    }
    else if(operatore()=='*'){
        printf("Il loro prodotto è %Lf\n", x*y);
    }
    else{
        printf("Il loro rapporto è %Lf\n", x/y);
    }
    return 0;
}