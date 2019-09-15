#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ler_aposta(int *aposta, int n);
void sorteia_valores(int *sorteio, int n);
int *compara_aposta(int *aposta, int *sorteio, int *qtdacertos, int na, int ns);

int main()
{

    int *aposta, *sorteio, na, ns = 20, qtdacertos = 0, i = 0, *v;

    printf("\n\n=============Bingo de Prog II============\n");
    printf("\nNumero de apostas: ");
    do
    {
        scanf("%d", &na);
        if ((na > 20 || na < 1))
        {
            printf("Pode apostar apenas entre 1 e 20 apostas\n");
        }
    } while (na > 20 || na < 1);

    aposta = (int *)malloc(sizeof(int) * na);
    ler_aposta(aposta, na);
    sorteio = (int *)malloc(sizeof(int) * ns);
    sorteia_valores(sorteio, ns);
    v = compara_aposta(aposta, sorteio, &qtdacertos, na, ns);

    if (qtdacertos > 0)
    {
        printf("\n\nParabens, voce acertou %d numeros e sao eles: ", qtdacertos);
        for (i = 0; i < qtdacertos; i++)
        {
            printf("%d ", v[i]);
        }
    }
    else
    {
        printf("\n\nQue pena! Voce nao acertou nenhum numero!");
    }

    return 0;
}

void ler_aposta(int *aposta, int n)
{

    int i = 0;

    printf("\nInsira os numeros de sua aposta\n");
    for (i = 0; i < n; i++)
    {
        do
        {
            printf("Vetor Posicao (%d): ", i + 1);
            scanf("%d", &aposta[i]);
            if (aposta[i] < 0 || aposta[i] > 100)
            {
                printf("Valor incorreto, apenas entre 0 a 100\n");
            }
        } while (aposta[i] < 0 || aposta[i] > 100);
    }
}

void sorteia_valores(int *sorteio, int n)
{

    int i = 0;
    srand(time(NULL));
    printf("Numeros sorteados: ");
    for (i = 0; i < n; i++)
    {

        sorteio[i] = rand() % 100;
        printf("%d ", sorteio[i]);
    }
}

int *compara_aposta(int *aposta, int *sorteio, int *qtdacertos, int na, int ns)
{

    int i = 0, j = 0, k = 0, *resultado;

    resultado = (int *)malloc(sizeof(int));

    for (i = 0; i < na; i++)
    {
        for (j = 0; j < ns; j++)
        {
            if (aposta[i] == sorteio[j])
            {
                resultado[k] = aposta[i];
                k++;
                (*qtdacertos)++;
                resultado = (int *)realloc(resultado, (k + 1) * sizeof(int));
            }
        }
    }
    return resultado;
}