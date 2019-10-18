#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define n 20

/*Crie um programa que dado uma string, coloque as letras dela em ordem crescente pelo
algoritmo bubble sort.*/

int main()
{
    int i, j, temp;
    //char *nome, *aux;;
    char nome[n], aux;
    //nome = (char*) malloc(n * sizeof(char));
    //aux = (char*) malloc(n * sizeof(char));

    printf("Insira uma string\n");
    scanf("%s", nome);
    

    for ( i = 0; i < strlen(nome) - 1; i++)
    {
        for(j = 0; j < strlen(nome) - i - 1; j++){
            if(nome[j] > nome[j+1]){
                aux = nome[j];
                nome[j] = nome[j+1];
                nome[j+1] = aux;
            }
        }
    }
    
    
    printf("%s\n",nome);




    return 0;
}
