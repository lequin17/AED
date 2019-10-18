#include <stdio.h>
#include <stdlib.h>

int comparavalores(int *a, int *b);

int main(){

    int a, b;

    printf("Digite dois valores:\n");
    scanf("%d",&a);
    scanf("%d",&b);

    comparavalores(&a,&b);

    printf("A = %d\nB = %d\n", a,b);



    return 0;
}

int comparavalores(int *a, int *b){

    int *temp;

    if(*b > *a){
        temp = *a;
        *a = *b;
        *b = temp;
    }
   

}