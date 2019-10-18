#include <stdio.h>
#include <stdlib.h>

int somadobro (int a, int b);

int main(){

    int a, b;

    printf("Digite dois valores:\n");
    scanf("%d",&a);
    scanf("%d",&b);

    printf("%d",somadobro (a,b));



    return 0;
}

int somadobro (int a, int b){
    int r;
    a = a*2;
    b = b*2;
    r = a+b;
    return r;
}