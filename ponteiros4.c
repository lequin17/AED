#include <stdlib.h>
#include <stdio.h>

void trocavalores (int *a, int *b);

int main(){

    int a,b;

    printf("Digite dois valores:\n");
    scanf("%d",&a);
    scanf("%d",&b);

    trocavalores(&a, &b);

    return 0;
}

void trocavalores(int *a, int *b){
    int *temp;

    temp = a;
    a = b;
    b = temp;
    printf("A = %d\nB = %d", *a, *b);
}