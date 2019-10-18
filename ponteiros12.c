#include <stdio.h>
#include <stdlib.h>

int ordenavalores (int *a, int *b, int *c){
    
    int temp;
    if(*a == *b && *a == *c && *b == *c){
       
        return 1;
    }
    
    else if(*a > *c && *a > *b){
        if(*b > *c){
        temp = *a;
        *a = *c;
        *c = temp; 
        }
        else if(*c > *b){
            temp = *a;
            *a = *c;
            *c = temp;
            temp = *b;
            *b = *a;
            *a = temp;
        }
        return 0;
    }
}

int main (){

    int a, b, c;

    printf("Digite tres valores: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

(ordenavalores(&a,&b,&c)==0);
printf("A = %d\nB = %d\nC = %d\n",a,b,c);   

    return 0;
}