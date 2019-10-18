#include <stdio.h>
#include <stdlib.h>


int main(){

    int a = 4, *pi;
    float b = 2.3, *pf;
    char c = 'A', *pc;

    pi = &a;
    pf = &b;
    pc = &c;

    
    printf("A = %d\nB = %.2f\nC = %c\n", a,b,c);
    
    printf("Apos a mudanca\n");
    *pi = 10;
    *pf = 4.34;
    *pc = 'B';

    printf("A = %d\nB = %.2f\nC = %c\n", *pi,*pf,*pc);



    





    return 0;
}