#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*Fac¸a um programa que leia n nomes e ordene-os pelo tamanho utilizando o algoritmo
selection sort*/

int main(){
    int i,j,n,menor;
    char **nome, aux[20];

    printf("Quantos nomes quer colocar:");
    scanf("%d", &n);

    nome = (char**) malloc(sizeof(char*) * n);
  //  aux = (char*) malloc(sizeof(char)*20);
    for(i = 0; i < n; i++){
        nome[i] = (char*) malloc(sizeof(char) * 20);
        scanf("%s", nome[i]);
    }

    for(i = 0; i < n - 1; i++){
        menor = i;
        for(j = i +1; j < n; j++){
            if((strlen(nome[menor]) > (strlen(nome[j]))))
            menor = j;       
            }
            if(strcmp(nome[i], nome[menor])){
                strcpy(aux, nome[i]);
                strcpy(nome[i], nome[menor]);
                strcpy(nome[menor],aux); 
            }
    }

   for(i = 0; i < n; i++){
        
        printf("%s\n", nome[i]);
   }

    return 0;
}
