#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>


typedef struct pessoa{
	    /*int codigo; ------------- codigo de aluno*/
        char nome[20];
        unsigned int ra;
        int codcurso;
        char status;
        pessoa *prox;

};

int main()
{
    char opcao;
    pessoa *inicio=NULL, *novo, *fim;

    do{
        printf("\n Digite \n 1- inserrir \n 2 - listar \n 3 - remover \n 4 - esvaziar \n 5 - sair \n Digite: ");
        opcao=getche();

        switch(opcao)
        {
               case '1': /*Inserrir*/

                   novo=(pessoa*)malloc(sizeof(pessoa));
                   if(novo==NULL){
                     printf("\nMemoria não enccontrada!\n");
                   }
                   else{

                   printf("\n\n\n Nome: ");
                   getchar();
                   fgets(novo->nome,20, stdin);

                   printf("\n RA : \n");
                   scanf("%d",&novo->ra);

                   printf("\n Codigo do curso : \n");
                   scanf("%d",&novo->codcurso);

                   printf("\n Status : \n");
                   novo->status= toupper(getche());
                   novo->prox=NULL;

                   if(inicio==NULL)
                   {
                       inicio=novo;
                   }
                   else
                   {
                       fim->prox=novo;
                       fim=novo;
                   }
                }
               break;

               case '2' /* Listar */:

                   if( inicio==NULL){
                       printf("\n\n Fila vazia \n");
                   }
                   else{
                      pessoa *aux=inicio;
                      while(aux != NULL)
                      {
                       printf("\n\n Nome: %s ",aux->nome);
                       printf("\n RA: %d",aux->ra);
                       printf("\n Código do Curso : %d", aux->codcurso);
                       printf("\n Status : %c",aux->status);

                       aux=aux->prox;
                      }

                   }
               break;

               case '3' /*Remover*/:
                   if(inicio==NULL)
                    {
                        printf("fila vazia");
                    }
                   else
                    {
                        pessoa *aux=inicio->prox;
                        free(inicio);
                        inicio=aux;

                    }
               break;

               case '4'/* Esvaziar */:

                    if(inicio==NULL)
                    {
                        printf("\nFila Vazia\n");

                    }
                    else
                    {
                        pessoa *aux=inicio;
                        while(aux != NULL){
                            aux= inicio->prox;
                            free(inicio);
                            inicio=aux;
                        }

                    }
               break;

               case '5'/* Sair */:
                    if(inicio==NULL)
                    {
                        printf("\nFila Vazia\n");

                    }else{
                    pessoa *aux=inicio;
                   while(inicio != NULL){
                     aux=inicio->prox;
                     free(inicio);
                     inicio=aux;
                   }
                    }

               break;

               default:
                printf("OP Invalido");
       }


    }while(opcao !=5);

    return 0;
}
