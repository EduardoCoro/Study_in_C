#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

 struct fila{
   char nome[32];
   unsigned int ra;
   char status;
   fila *prox;

};

fila *inserir(fila *i);
void listar(fila *i);
fila *remover(fila *inicial);
void esvaziar(fila **inicial);
fila *novoelemento();
fila *inserirPilha(fila *i, int x);
void transferir(fila **i, fila **f, fila **t);
fila *localizar(fila *aux, int x);

int main(){

   fila *inicio=NULL, *fim;
   char op;

   do{
        printf("\n\n\n 1- inserir , 2-listar , 3-remover , 4- Esvaziar , 5 - localizar , 6 - sair \n Digite : ");
        op= getche();

        switch(op)
        {
            case '1' : inserir( inicio);
            break;
            case '2' : listar(inicio);
            break;
            case '3' : remover( inicio);
            break;
            case '4' : esvaziar(& inicio);
            break;
            case '5' : localizar(& inicio, inicio->ra);
            break;

            default:
                printf("\n\nOP invalido");

        }

   }while(op != '6');

   return 0;
}

fila *novoelemento(){

     fila *novo=(fila*)malloc(sizeof(fila));
     if(novo==NULL){
        printf("\n\n Sem memoria\n");
        exit(1);
     }
     printf("\n Nome : ");
     fflush(stdin);


     gets(novo->nome);
     printf("\nRA :");
     scanf("%d",& novo->ra);

     do{
       printf("\nStatus :");
       novo->status=toupper(getche());
       if(novo->status!='P' && novo->status!='N' && novo->status!='D')
        printf("Opção invalida");
     }while(novo->status!='P' && novo->status!='N' && novo->status!='D');

     return novo;

}

fila *inserir(fila *i){
    fila *novo=novoelemento();
    novo->prox=i;
    return i;

}

fila *localizar(fila *aux, int x){
    while(aux->prox!aux && aux->prox->ra!=x)
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

void listar(fila *i){
   if(i==NULL){
      printf("\nFila vazia\n");
   }
   else
   {
      while(i !=NULL){
        printf("\n RA: %d \n Nome: %s \n Status: %c ",i->ra,i->nome,i->status);
        i= i->prox;
      }
   }

}

fila *remover(fila *inicial){
   fila *aux;
   if(inicial==NULL){
      printf("\n Fila Vazia\n");
   }
   else
   {
       aux=inicial->prox;
       free(inicial);

   }
   return aux;

}

void esvaziar(fila **inicial){

       while(*inicial !=NULL)
       {
           *inicial=remover( *inicial);

       }

}

