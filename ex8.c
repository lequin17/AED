#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *uniao(int *v1, int *v2, int n1, int n2);
void liberar(int *v1, int *v2, int *v3);
int main()
{

    int *v1, *v2, n1, n2, *vet, i, j, k;

    printf("Tamanho do primeiro vetor: ");
    scanf("%d", &n1);
    printf("Tamanho do segundo vetor: ");
    scanf("%d", &n2);

    v1 = (int *)malloc(n1 * sizeof(int));
    v2 = (int *)malloc(n2 * sizeof(int));

    srand(time(NULL));

    printf("\nVetor 1: ");
    for (i = 0; i < n1; i++)
    {
        v1[i] = rand() % 100;
        printf("%d ", v1[i]);
    }

    printf("\nVetor 2: ");
    for (j = 0; j < n2; j++)
    {
        v2[j] = rand() % 100;
        printf("%d ", v2[j]);
    }

    vet = uniao(v1, v2, n1, n2);

    printf("\nVetor novo: ");
    for (k = 0; k < (n1 + n2); k++)
    {
        printf("%d ", vet[k]);
    }

    liberar(v1,v2,vet);

    return 0;
}

int *uniao(int *v1, int *v2, int n1, int n2)
{

    int *v3, i, j, k;

    v3 = (int *)malloc((n1 + n2) * sizeof(int));

    for (i = 0; i < n1; i++)
    {
        v3[k] = v1[i];
        k++;
    }

    for (j = 0; j < n2; j++)
    {
        v3[k] = v2[j];
        k++;
    }

    return v3;
}

void liberar(int *v1, int *v2, int *v3){

    free(v1);
    free(v2);
    free(v3);

}