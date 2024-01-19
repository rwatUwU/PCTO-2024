#include <stdio.h>

void cambio (int *x, int *y){
    int i;

    i=*x;
    *x=*y;
    *y=i;
}

int main (){
    int x=5;
    int y=7;

    cambio(&x, &y);
    printf("%d\n%d\n", x, y); 
    return 0;
}