#include <stdio.h>
#include <stdlib.h>



int main(){

    int a,*v,n,i=0,temp,temp2;

    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    v = (int*) malloc(n*sizeof(int));
    
    for(i=0; i<n; i++){
        *(v+i) = i*2;
        printf("%d ", v[i]);
    }

    printf("\nDigite o numero que deseja inserir: ");
    scanf("%d", &a);
    i=0;
    while(i<n && a>*(v+i)){
        i++;
    }
    temp=i;
   
    v = (int*) realloc(v,(n+1)*sizeof(int));
    
    for(i=n; i>=temp-1; i--){
        *(v+i+1) = *(v+i);
       
    }
    *(v+temp)=a;

    for(i=0; i<n+1; i++){
        printf("%d ", *(v+i));
    }


    return 0;
}