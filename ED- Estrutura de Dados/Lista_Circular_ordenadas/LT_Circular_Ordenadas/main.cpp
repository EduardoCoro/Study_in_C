#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct typedef Lista
{
    int cod;
    Lista *prox;
};

int main()
{
    Lista *inicio, *fim;



    return 0;
}

Lista* NovoElemento()
{
    Lista *novo= (Lista*) malloc(sizeof(Lista));

    if( novo == NULL ){
        printf("\n\nSem memoria");
        getch();
        exit(1);
    }
    printf("\n COD : ");
    scanf("%d", & novo->cod);

    return novo;
}

void InserirInicio(Lista **i, Lista **f){
    Lista *novo= NovoElemento();

    novo->prox = *i;
    *i=novo;

    if(*f == NULL) (*i)->prox=*i;
    else (*f)->prox= *i;

}

void InserirFim(Lista **f){
    Lista *novo= NovoElemento();

    novo->prox= (*f)->prox;
    *f=novo;
}
