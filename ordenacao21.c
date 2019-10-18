#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct pessoa{
int matricula;
char nome[30];
float nota;
};

int main( )
{
    int i, j, opt,n, menor, temp;
    char aux[30];
    printf("Quantas pessoas deseja cadastrar:");
    scanf("%d",&n);
    struct pessoa v[n],stemp;

    for(i = 0; i < n; i++){
        printf("\n");
        printf("Nome: ");
        scanf("%s", v[i].nome);
        printf("Matricula: ");
        scanf("%d",&v[i].matricula);
        printf("Nota: ");
        scanf("%f", &v[i].nota);
    }    
    
    
    for(; ;){
        printf("\n\n1-Ordenar Por Nome\n2-Ordenar Por Matricula\n3-Ordenar Por Nota\n\n");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1: 
            for(i = 1; i < n; i++){
                j = i -1;
                strcpy(aux, v[i].nome);
                stemp = v[i];
                while(j >= 0 && strcmp(v[j].nome, aux) > 0){
                   v[j + 1] = v[j];
                   
                    j--;

                }
                v[j+1] = stemp;

        }
            for(i = 0; i < n; i++){
                printf("%s\n", v[i].nome);
                printf("%d\n", v[i].matricula);
                printf("%.1f\n", v[i].nota);
                printf("\n");
            }

            break;
        
        case 2:
            for(i = 0; i < n - 1; i++){
                menor = i;
                for(j = (i + 1); j < n; j++){
                    if(v[menor].matricula > v[j].matricula)
                        menor = j;
                    
                }
                    if(v[i].matricula != v[menor].matricula){
                        stemp = v[i];
                        v[i] = v[menor];
                        v[menor] = stemp;
                    }
                }
            
            for(i = 0; i < n; i++){
                printf("%s\n", v[i].nome);
                printf("%d\n", v[i].matricula);
                printf("%.1f\n", v[i].nota);
                printf("\n");
            }


            break;

        case 3: 
            for(i = 1; i < n; i++){
                for(j = 0; j < n - 1; j++){
                    if(v[j].nota > v[j + 1].nota){
                        stemp = v[j];
                        v[j] = v[j + 1];
                        v[j + 1] = stemp;
                    }
                }
            }
            for(i = 0; i < n; i++){
                printf("%s\n", v[i].nome);
                printf("%d\n", v[i].matricula);
                printf("%.1f\n", v[i].nota);
                printf("\n");
            }

            break;
        }
    }
    
    return 0;
}
