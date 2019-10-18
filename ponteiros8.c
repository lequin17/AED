#include <stdio.h>
#include <stdlib.h>

int main(){

    float v[10];

    for(int i=0; i<10; i++){
        printf("%d\n", &v[i]);
    }




    return 0;
}