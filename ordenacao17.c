#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  n 5

/*Fac¸a um programa que leia n nomes inserindo-os em uma lista de forma ordenada utilizando a ideia
do algoritmo insertion sort. No final, o programa deve mostrar todos os
nomes ordenados alfabeticamente*/


int main(int argc, char const *argv[])
{
    int i,j;
    char nome[n][20], aux [20];

    printf("Digite %d nomes:\n", n);
    for(i = 0; i < n; i++){
        scanf(" %s", nome[i]);
    }
    
    for(i = 1; i < n; i++){
        j = i - 1;
        strcpy(aux, nome[i]);
        while(j >= 0 && strcmp(nome[j], aux)>0 ){
            strcpy(nome[j + 1], nome[j]);
            j--;
        }
        strcpy(nome[j + 1], aux);
    }

    printf("\n\n");
    for ( i = 0; i < n; i++)
    {
       printf("%s\n", nome[i]);
    }
    

    return 0;
}
