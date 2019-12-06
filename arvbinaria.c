# include  < stdio.h >
# include  < stdlib.h >
# include  < string.h >

struct aluno
{
    char nome [ 20 ];
    int telefone;
};

struct No
{
    struct aluno informação;
    struct No * esquerda;
    struct No * direita;
};
typedef  struct Não Não;
typedef  struct aluno Aluno;
void  criarArvore (No ** pRaiz);
 listar vazio (No * pRaiz);
vazio  nulo (No ** pRaiz, Aluno aux);
 busca nula (No * pRaiz, Aluno aux);
 removedor de vazios (No ** pRaiz, Aluno aux);
 antecessor nulo (No * p, No ** pp);
int  main ()
{
    int op;
    Aluno aux;
    Não * raiz;
    criarArvore (& raiz);
    para (;;)
    {
        printf ( " 1) Inserir \ n " );
        printf ( " 2) Listar \ n " );
        printf ( " 3) Buscar \ n " );
        printf ( " 4) excluir \ n " );
        printf ( " 5) Sair \ n " );
        scanf ( " % d " , & op);
        interruptor (op)
        {
        caso  1 :
            printf ( " Informe o nome: " );
            scanf ( " % s " , nome auxiliar );
            printf ( " Informe o telefone: " );
            scanf ( " % d " , e aux. telefone );
            insere (& raiz, aux);
            quebrar ;
        caso  2 :
            listar (raiz);
            quebrar ;
        caso  3 :
            printf ( " Informe o nome que deseja buscar: " );
            scanf ( " % s " , nome auxiliar );
            buscar (raiz, aux);
            quebrar ;
        caso  4 :
            printf ( " Informe o nome que deseja excluir: " );
            scanf ( " % s " , nome auxiliar );
            removedor (& raiz, aux);
            quebrar ;
        caso  5 :
            saída ( 0 );
            quebrar ;
        padrão :
            printf ( " Opcao invalida \ n " );
            quebrar ;
        }
    }
    retornar  0 ;
}
void  criarArvore (No ** pRaiz)
{
    * pRaiz = NULL ;
}
void  insere (No ** pRaiz, Aluno aux)
{
    if (* pRaiz == NULL )
    {
        * pRaiz = (Não *) malloc ( sizeof (No));
        (* pRaiz) -> esquerda = NULL ;
        (* pRaiz) -> direita = NULL ;
        (* pRaiz) -> info = aux;
    }
    outro
    {
        if ( strcmp ( nome auxiliar , ((pRaiz) -> info . nome )) < 0 )
        {
            insere (& ((* pRaiz) -> esquerda ), aux);
        }
        outro
        {
            insere (& ((* pRaiz) -> direita ), aux);
        }
    }
}
 listar vazio (No * pRaiz)
{
    if (pRaiz! = NULL )
    {
        listar (pRaiz-> esquerda );
        printf ( " Nome: % s \ n " , pRaiz-> info . nome );
        printf ( " Telefone: % d \ n " , pRaiz-> info . telefone );
        listar (pRaiz-> direita );
    }
}
void  buscar (No * pRaiz, Aluno aux)
{

    if (pRaiz! = NULL )
    {

        if ( strcmp (aux. nome , pRaiz-> info . nome ) < 0 )
        {
            buscar (pRaiz-> esquerda , aux);
        }
         caso contrário, if ( strcmp (aux. nome , pRaiz-> info . nome )> 0 )
        {
            buscar (pRaiz-> direita , aux);
        }
        outro
        {
            printf ( " Nome: % s \ n " , pRaiz-> info . nome );
            printf ( " Telefone: % d \ n " , pRaiz-> info . telefone );
        }
    }
    outro
    {
        printf ( " Sem dados! \ n " );
    }
}

 removedor de vazios (No ** pRaiz, Aluno aux)
{
    Não * auxiliar;

    if (* pRaiz == NULL )
        retorno ;

    if ( strcmp (aux. nome , (* pRaiz) -> info . nome ) < 0 )
    {
        removedor (& (* pRaiz) -> esquerda , aux);
        retorno ;
    }

    if ( strcmp (aux. nome , (* pRaiz) -> info . nome )> 0 )
    {     removedor (& (* pRaiz) -> direita , aux);
         retorno ;
    }

    if ((* pRaiz) -> direita == NULL )
    {
        auxiliar = * pRaiz;
        * pRaiz = (* pRaiz) -> esquerda ;
        livre (auxiliar);
        retorno ;
    }

    if ((* pRaiz) -> esquerda ! = NULL )
    {
        antecessor (* pRaiz, & (* pRaiz) -> esquerda );
        retorno ;
    }

    auxiliar = * pRaiz;
    * pRaiz = (* pRaiz) -> direita ;
    livre (auxiliar);
}

 antecessor nulo (No * p, No ** pp)
{
    Não * aux;

    if ((* pp) -> direita ! = NULL )
    {    
        antecessor (p, & (* pp) -> direita );
        retorno ;
    }

    p-> info = (* pp) -> info ;
    aux = * pp;
    * pp = (* pp) -> esquerda ;
    livre (aux);
}