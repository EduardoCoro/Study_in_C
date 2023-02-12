#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct Lista{
    int cod;
    Lista *prox;
};

Lista *novoelemento();
Lista *localizar(Lista *aux, int x );
void Escolha();
void Inserir(Lista **i, Lista **f);
void insereInicio( Lista *i , Lista *novo);
void insereMeio(Lista *enc);
void insereFim( Lista *f, Lista *novo);

int main()
{
    Lista *inicio, *fim;

    Inserir( &inicio, &fim);
    return 0;
}

Lista *novoelemento(){

     Lista *novo=(Lista*)malloc(sizeof(Lista));
     if(novo==NULL){
        printf("\n\n Sem memoria\n");
        exit(1);
     }

     printf("\n COD :");
     scanf("%d",& novo->cod);

     return novo;

}


void InserirLista **i, Lista **f)
{
    if(*i == NULL){
        Lista *novo = novoelemento();
        novo->prox=NULL;
        *i = *f = novo;
    }
    else if(*i == *f)
    {
        if(Escolha() == 'a' || Escolha() == 'A')
        {
            insereInicio(*i);
        }
        else
        {
            insereFim(& *f);
        }
    }
    else
    {
        char op;
        printf("\n\n Deseja inserrir em qualquer elemento :  ");
        scanf("%d", & x);
        op=Escolha();
        if((*i)->cod == x)
        {
            if(op=='a' || op == 'A')
            {
                insereInicio(&*i);
            }
            else
            {
                insereMeio(&*i);
            }
        }
        else if( op =='d' || op == 'D' && (*f)->cod=='x' || (*f)->cod=='X')
        {
            insereFim(&*f);
        }
        else
        {
            Lista *enc= localizar(*i , x);
            if(enc==NULL)
            {
                printf("Valor não encontrado ");
            }
            else
            {
                if(op=='o' || op=='O')
                {
                    enc = enc->prox;
                    insereMeio(&enc);
                }
            }
        }
    }
}

Lista *localizar(Lista *aux, int x){
    while(aux->prox != aux && aux->prox->ra!=x)
    {
        aux=aux->prox;
    }
    if(aux -> prox ==NULL){
        return NULL;
    }
    else{
        return aux;
    }
}

void Escolha()
{
    char opcao;

    printf("\n\n\n");
    printf("Informe a sua escolha - ( A\a - antes , D\d - depois ) :  ");
    fflush(stdin);
    gets(opcao);

    return opcao;
}

void insereInicio(Lista *i , Lista *novo)
{
    Lista *novo;
    novo= novoelemento();
    novo->prox= *i;
    *i= novo;
    return novo;
}

void insereFim(Lista *f , Lista *novo)
{
    Lista *novo;
    novo= novoelemento();
    novo->prox=NULL;
    (*f)->prox= novo;
    *f=novo;
    return novo;
}

void insereMeio(Lista *enc)
{
    Lista *novo;
    novo = novoelemento();
    novo->prox = enc->prox;
    enc->prox= novo;
    return novo;
}
