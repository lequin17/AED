#include <stdio.h>
#include <stdlib.h>

void soma(int *a, int *b);

int main(){

    int a, b;

    printf("Digite dois valores:\n");
    scanf("%d",&a);
    scanf("%d",&b);

    soma(&a,&b);



    return 0;
}

void soma(int *a, int *b){

    

}