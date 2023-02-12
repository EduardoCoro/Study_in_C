
#include <stdio.h>
#include <stdlib.h>

void bolha (int n, int* v);

int main()
{
    int  maior=0, linha=0, coluna=0;
    int i=0,j=0,ln=0, cl=0 , qdt=0, a=1 ;



    printf("Criando Matris !!!! \n ");

    printf("Informe a quantidade de linha  :  \n ");
    scanf("%d", & linha);

    printf("Informe a quantidade de coluna : \n ");
    scanf("%d", & coluna);

    printf("\n A quantidade de numeros para inserir e :    %d  numeros  \n \n ", qdt= linha * coluna);

    int num[linha][coluna], vetor[qdt], e=0;

    for(i=0; i < linha ; i++)
    {
             for(j=0 ; j < coluna ; j++ )
             {
                 printf("Digita o %d numero - da linha(%d) coluna(%d) :  ", a,i,j );  /* recebendo os valores */
                 scanf("%d", & num[i][j]);
                 a++;
                 vetor[e]= num[i][j];
                 e++;

                  if(num[i][j] > maior)  /* descobrindo o maior */
                  {
                      maior= num[i][j];
                      ln=i;
                      cl=j;
                  }
             }
    }
    printf("\n\n");

    for(i=0; i<linha ; i++) /* Exibindo os numeros da matris */
    {
             for(j=0 ; j < coluna ; j++ )printf(" %d ",num[i][j]);
             printf("\n");
    }

    printf("\n O maior numero - %d , Linha - %d , coluna - %d  \n ",maior,ln,cl);

    bolha (qdt, vetor); /* trocando a ordem dos valores */

     printf("\n\n Ordem crescente \n\n ");

     for(i=0; i<qdt ; i++)  /* exibindo o crescente */
    {
      printf(" %d" , vetor[i]);
    }

    return 0;
}

void bolha (int n, int* v)
{
    int fim=0,i=0;
     for (fim=n-1; fim>0; fim--)
     {
        for (i=0; i<fim; i++)
         {
            if (v[i]>v[i+1])
            {
            int temp = v[i]; /* troca */
            v[i] = v[i+1];
            v[i+1] = temp;
            }
         }
     }
}

