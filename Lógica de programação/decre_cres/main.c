#include<stdio.h>
#include<stdlib.h>

int cal(int *p1, int *p2);

int main(){

    int N1 = 0, N2 = 0, N3 = 0, Ord = 0,resp=0;


    printf("\n Digite 3 Numeros: \n");
    scanf("%d%d%d", &N1, &N2, &N3);
    printf("\n Ordem Crescente - 1 / Decrescente - 2: \n");
    scanf("%d", &Ord);

        if(N1>N2){

         cal(&N1,&N2);

        }
        if (N2>N3){

          cal(&N2,&N3);
        }

        if(N1>N2){

          cal(&N1,&N2);
        }

   if(Ord == 1){

      printf("\n Resultado: \n %d \n %d \n %d \n", N1, N2, N3);
   }
    else {

        printf("\n Resultado: \n %d \n %d \n %d \n", N3, N2, N1);
    }

    return 0;
}

int cal(int *p1, int *p2)
  {
       int aux = *p1;
       *p1 = *p2;
       *p2 = aux;

  }
