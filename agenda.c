//Git teste
#include <stdio.h>

#include <stdlib.h>
#include <string.h>

typedef struct data
{

	int dia, mes;
} t_niver;

typedef struct agenda
{

	char nome[20];
	t_niver niver;
	int tel;
	struct agenda *prox;
} t_agenda;

t_agenda *cria(void);
void cadastrar(t_agenda t, t_agenda *p);
void listar(t_agenda *ini);
//void pesquisar(t_agenda *p);
void editar(char *nomer, t_agenda *ini);
void apagar(char *nomer, t_agenda *ini);

int main(int argc, char **argv)
{
	t_agenda *ini, t;
	ini = cria();
	char nomer[20];

	int es;

	do
	{
		printf("==========AGENDA==========\n\n");
		printf("1-CADASTRAR\n2-EDITAR\n3-LISTAR\n4-APAGAR\n5-SAIR\n");
		scanf("%d", &es);

		switch (es)
		{
		case 1:
			printf("\nNOME: ");
			fflush(stdin);
			scanf(" %[^\n]s", t.nome);
			printf("TELEFONE: ");
			scanf("%d", &t.tel);
			printf("DATA DE ANIVERSARIO: ");
			do
			{
				scanf("%d", &t.niver.dia);
				if (t.niver.dia > 31 || t.niver.dia <= 0)
				{
					printf("Dia invalido, entre com um dia valido!\n");
				}
			} while (t.niver.dia > 31 || t.niver.dia <= 0);
			do
			{
				scanf("%d", &t.niver.mes);
				if (t.niver.mes > 12 || t.niver.mes <= 0)
				{
					printf("Mes invalido, entre com um mes valido!\n");
				}
			} while (t.niver.mes > 12 || t.niver.mes <= 0);
			cadastrar(t, ini);
			break;

		case 2:
			printf("Digite o nome do contato que queira editar: ");
			fflush(stdin);
			scanf(" %[^\n]s", nomer);
			editar(nomer, ini);
			break;

		case 3:
			listar(ini);
			break;

		case 4:
			printf("Digite o nome que deseja excluir\n");
			fflush(stdin);
			scanf(" %[^\n]s", nomer);
			apagar(nomer, ini);
		}
	} while (es != 5);
	return 0;
}

t_agenda *cria(void)
{

	t_agenda *start;

	start = (t_agenda *)malloc(sizeof(t_agenda));
	start->prox = NULL;
	return start;
}

void cadastrar(t_agenda t, t_agenda *p)
{

	t_agenda *nova;

	nova = (t_agenda *)malloc(sizeof(t_agenda));
	strcpy(nova->nome, t.nome);
	nova->tel = t.tel;
	nova->niver = t.niver;
	nova->prox = p->prox;
	p->prox = nova;
}

void editar(char *nomer, t_agenda *ini)
{

	t_agenda *q;

	q = ini->prox;
	while ((q != NULL) && (strcmp(nomer, q->nome) != 0))
	{
		q = q->prox;
	}
	if (q != NULL)
	{
		printf("Nome: ");
		fflush(stdin);
		scanf(" %[^\n]s", q->nome);
		printf("Telefone: ");
		scanf("%d", &q->tel);
		printf("Data de aniversario: ");
		scanf("%d", &q->niver.dia);
		scanf("%d", &q->niver.mes);
	}
	else
	{
		printf("Nome nao encontrado!!");
	}
}

void listar(t_agenda *p)
{

	t_agenda *i;

	for (i = p->prox; i != NULL; i = i->prox)
	{

		printf("Nome: %s\n", i->nome);
		printf("Telefone: %d\n", i->tel);
		printf("Data de aniversario %d/%d\n", i->niver.dia, i->niver.mes);
		printf("\n");
	}
}

void apagar(char *nomer, t_agenda *ini)
{

	t_agenda *p, *q;
	p = ini;
	q = ini->prox;
	while ((q != NULL) && (strcmp(nomer, q->nome) != 0))
	{

		p = q;
		q = q->prox;
	}
	if (q != NULL)
	{

		p->prox = q->prox;
		free(q);
		printf("Excluido com sucesso\n");
	}
	else
	{
		printf("Nome nao encontrado");
	}
}
