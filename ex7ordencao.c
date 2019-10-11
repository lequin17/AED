#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){


    int *v,n,i,j,temp,entrou=0,a;

        printf("Digite o tamanho do vetor: ");
        scanf("%d", &n);
        printf("Digite o numero que deseja procurar");
        scanf("%d", &a);
        v = (int*) malloc(n * sizeof(int));

        srand(time(NULL));
        for(i = 0; i < n; i++){
            *(v+i) = rand () % 20;
            printf("%d ", *(v+i));
        }

        for(i = 0; i < n-1; i++){
            for(j = 0; j < n-i-1; j++){
                if(*(v+j) > *(v+(j+1))){
                    temp = *(v+j);
                    *(v+j) = *(v+(j+1));
                    *(v+(j+1)) = temp;
                    entrou++;
                    
                }
              
            }
              if(entrou == 0){
                    i = n;
                    j=n;
                }
        }
        printf("\n");
        
        
        for(i = 0; i < n; i++){
            if(*(v+i) == a){
                temp = *(v+i);
            }           
            printf("%d ", *(v+i));
        }
        if(temp == a){
            printf("\nO numero %d esta contido no vetor", temp);
        }
        else{
            printf("\nO numero %d nao esta contido no vetor", a);
        }




    return 0;

}