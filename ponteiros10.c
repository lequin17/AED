#include <stdlib.h>
#include <stdio.h>


int main (){

    int v[5];

    for(int i=0; i<5; i++){
        printf("(%d) ", i+1);
        scanf("%d", (v+i));
    }

    for(int i=0; i<5; i++){
        *(v+i) = *(v+i) * 2;
        printf("(%d) %d\n", i+1, *(v+i));
        
    }




    return 0;
}