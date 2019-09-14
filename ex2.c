#include <stdio.h>
#include <stdlib.h>

int *Criar (int n){
    int *v;
    v = (int *) malloc(n*sizeof(int));
    return v;
}

int Imprimir (int *v, int n){
    for(int i=0; i<n; i++){
        printf("%d\n", *(v+i));
    }

}

void Limpar (int *v){
    free(v);
}


int main(){

    int n, *v;

    printf("Digite um valor para n: ");
    scanf("%d",&n);
    v = Criar(n);
    

    for(int i=0; i<n; i++){
        printf("Vetor posicao %d: ",i+1);
        scanf("%d", (v+i));
        
    }
    Imprimir(v,n);
    Limpar(v);

    return 0;
}