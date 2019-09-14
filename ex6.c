#include <stdio.h>
#include <stdlib.h>

typedef struct data{
    int dia, mes, ano;
}niver;

typedef struct tad{

    char nome[20];
    niver data;
    int cpf;

}dados;

void armazenar (dados *p);
void imprimir (dados *p);

int main(){

    dados p;

    //p = (dados *) malloc(sizeof(dados));
    armazenar(&p);
    imprimir(&p);

    return 0;
}

void armazenar (dados *p){

    printf("Nome: ");
    scanf(" %[^\n]s",p->nome);
    printf("Data de nascimento (dia,mes,ano): ");
    scanf("%d", &p->data.dia);
    scanf("%d", &p->data.mes);
    scanf("%d", &p->data.ano);
    printf("CPF: ");
    scanf("%d", &p->cpf);
}

void imprimir (dados *p){

    printf("Nome: %s\n", p->nome);
    printf("Data de nascimento: %d/%d/%d\n", p->data.dia,p->data.mes,p->data.ano);
    printf("CPF: %d\n", p->cpf);

}