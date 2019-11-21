#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct aluno{
    int item[MAX];
    int topo;
}t_pilha;

void t_pilha_inicia(t_pilha *p){
    p->topo = -1;
}

int t_pilha_vazia(t_pilha *p){
    if(p->topo == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int t_pilha_full(t_pilha *p){
    if(p->topo == MAX - 1){
        return 1;
    }
    else{
        return 0;
    }
}

void insere (t_pilha *p, int x){
    if(t_pilha_full(p) == 1 ){
        printf("ERRO!!! PILHA CHEIA");
    }
    else{
        p->topo++;
        p->item[p->topo] = x;
    }
}
 int remover (t_pilha *p){
     int aux;
     if(t_pilha_vazia(p) == 1){
         printf("A PILHA ESTA VAZIA!!");
     }
     else{
         aux = p->item[p->topo];
         p->topo--;
         return aux;
     }
 }

int main(){

int aux;
t_pilha *p;
p = (t_pilha*) malloc(sizeof(t_pilha));

for(int i = 0; i < MAX; i++){
    insere(p, i);
    printf("%d ",i);
}
printf("\n");

for(int i = 0; i < MAX; i++){
    printf("%d ",aux = remover(p));

}

    return 0;
}