#include <stdio.h>
#include <stdlib.h>


int main(){

    int a,b;

    printf("Digite A e B: ");
    scanf("%d",&a);
    scanf("%d",&b);

    if(&a > &b){
        printf("A = %d",a);
    }    
    else{
        printf("B = %d", b);
    }



    return 0;
}