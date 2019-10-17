#include <stdlib.h>
#include <stdio.h>


int main(){
    int i,j,temp,a=0;
    int v[10];
    v[0] = 72;
    v[1] = 12;
    v[2] = 62;
    v[3] = 69;
    v[4] = 27;
    v[5] = 67;
    v[6] = 41;
    v[7] = 56;
    v[8] = 33;
    v[9] = 74;

    for(int i = 1; i < 10; i++){
        j = i-1;
        temp = v[i];
        while(j >= 0 && v[j] > temp){
           if(j >= 0 && v[j] > temp){ 
            v[j+1]=v[j];
            j--;
            a++;
           }
        }
        v[j+1]=temp;
    }

for(i = 0; i < 10; i++){
    printf("%d ",v[i]);
}

printf("\nForam feitas %d trocas", a);

    return 0;
}