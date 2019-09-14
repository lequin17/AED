#include <stdio.h>
#include <stdlib.h>

void Criar (int n, int *v){
    int i=0;
    for(i=0; i<n; i++){
        printf("Vetor posicao [%d] ",i+1);
        scanf("%d", (v+i));
    }
    
}

int main(){

   int n;
   int *v;

   printf("Tamanho do vetor:");
   scanf("%d",&n);

   v = (int *) malloc(n*sizeof(int));
        
    Criar(n,v);
    for(int i=0;i<n;i++){
        printf("%d\n", *(v+i));
    }
    free(v);
    return 0;
}