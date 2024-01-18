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
    while((x!='48')&&(x!='49')&&(x!='50')&&(x!='51')&&(x!='52')&&(x!='53')&&(x!='54')&&(x!='55')&&(x!='56')&&(x!='57')){
        printf("\n\nIl carattere digitato non è un numero, riprova.\n");
        printf("Inserisci il primo numero:\n");
        scanf("%Lf", x);
    }
    printf("Inserisci il secondo numero:\n");
    scanf("%Lf", &y);
        while((y!='48')&&(y!='49')&&(y!='50')&&(y!='51')&&(y!='52')&&(y!='53')&&(y!='54')&&(y!='55')&&(y!='56')&&(y!='57')){
        printf("\n\nIl carattere digitato non è un numero, riprova.\n");
        printf("Inserisci il primo numero:\n");
        scanf("%Lf", y);
    }
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