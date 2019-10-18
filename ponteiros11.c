#include <stdio.h>
#include <stdlib.h>

int main (){

    int v[5] = {5, 6, 7, 12, 4}, i, j;

    for(i = 0; i < 5; i++){
        if(v[i] % 2 == 0){
            printf("%d ", &v[i]);
        }
    }



    return 0;
}