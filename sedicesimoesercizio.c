#include <stdio.h>

int main (){
    int n=102;

    while(n>=0){
        n=n-1;
        if(n%2==0){
            printf("%d\n", n);
        }
    }
return 0;
}