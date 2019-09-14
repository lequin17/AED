#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *valores_entre(int *v, int n, int min, int max, int *qtd);
void libera(int *q);

int main()
{

    int n, min, max, qtd = 0, *a;

    printf("Tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];

    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        v[i] = rand() % 100;
        printf("%d ", v[i]);
    }

    printf("\nDigite o valor minimo a ser procurado: ");
    scanf("%d", &min);
    printf("Digite o valor maximo a ser procurado: ");
    scanf("%d", &max);

    a = valores_entre(v, n, min, max, &qtd);

    for (int i = 0; i < qtd; i++)
    {
        printf("%d ", a[i]);
    }
    libera(a);

    return 0;
}

int *valores_entre(int *v, int n, int min, int max, int *qtd)
{

    int *vet, i, j = 0;

    for (i = 0; i < n; i++)//verifica e conta se ha numeros entre minimo e maximo
    {
        if (v[i] > min && v[i] < max)
        {
            (*qtd)++;
        }
    }

    if (*qtd == 0)
    {
        printf("Nao ha valores entre min e max\n");
    }

    if (*qtd > 0)//aloca um vetor do tamanho de numeros entre minimo e maximo
    {
        vet = (int *)malloc(*qtd * sizeof(int));
    }
    else
    {
        return NULL;
    }

    for (i = 0; i < n; i++)//copia os valores entre minimo e maximo
    {
        if (v[i] > min && v[i] < max)
        {
            vet[j] = v[i];
            j++;
        }
    }

    return vet;
}

void libera(int *q)
{
    free(q);
}