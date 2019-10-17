#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *ordem (int *v, int n);


int main(){

    int *v, n, i=0;

    printf("Tamanho do Vetor: ");
    scanf("%d", &n);

    v = (int*) malloc(n*sizeof(int));

    srand(time(NULL));
    for(i=0; i<n; i++){
        
        *(v+i) = rand () % 100;
        printf("%d ", *(v+i));
    }

    
    ordem(v,n);
printf("\n ");
for(i=0; i<n; i++){
        
        printf("%d ", *(v+i));
    }
free(v);
    return 0;
}

int *ordem (int *v, int n){

    int i=0,temp;
    int j;

    for(j=1; j < n ; j++){
        i= j-1;
        temp = v[j];
        while((i>=0) && (temp > v[i])){
            v[i+1] = v[i];
            i--;
        }
        v[i+1] = temp;
    }
}

