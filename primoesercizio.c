#include <stdio.h>

int main (){
    int x = 723;
    float y = 9.9;
    char z = 'w';
    short u = -277;
    long v = 100000;
    double w = 9.9999;
    
    printf("%d\n", x);
    printf("%f\n", y);
    printf("%c\n", z);
    printf("%f, %d, %c\n", y,x,z);
    printf("%ld\n",v);
    printf("%d\n", u);
    printf("%lf\n", w);
    return 0;
}