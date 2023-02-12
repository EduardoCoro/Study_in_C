#include <stdio.h>
#include<stdlib.h>

int existenum(int[] , int , int );

int main(){

    int linha=0, coluna=0;
    int matriz[3][3];
    int a=0, aux=0;
    int num=0,  vt[9];

    for(linha=0;linha<3;linha++)
    {
        for(coluna=0;coluna<3;coluna++)
        {
            printf("Digite o numero que corresponde a linha %i, na coluna %i da matriz: ",linha, coluna);
            scanf("%i", &matriz[linha][coluna]);
        }
    }

    for(linha=0;linha<3;linha++)
    {
         for(coluna=0;coluna<3;coluna++)
         {
               num = matriz[linha][coluna];

               if (existenum(vt, 9 , num) == 1)
               {
                  printf("\n Repetiu na matriz: - ' %d  '  ", num);

                   aux++;
               }
               else
               {
                   vt[a]= matriz[linha][coluna];

               }
               a++;

          }
     }

     if(aux==0)
        {
            printf("\n A Matriz não possui elementos repetidos! \n");
        }


   return 0;

}

int existenum(int existe[], int nroMatris, int nroNum)
{
    int a=0;
    for (a = 0; a < nroMatris; a++){
        if (existe[a] == nroNum){
            return 1;
        }
    }
}

