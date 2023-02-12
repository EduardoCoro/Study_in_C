#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opc=0,i=0,resp=0;

    do
    {

    printf("Escolha o 1 - par e 2 - impar  ");
    scanf("%i",& opc);

    if(opc==1)
    {
        printf("\n Par \n");
        for(i=2;i<=100;i+=2)
        {
            printf("%i \n",i);
        }
    }
    else
    {
        printf("\n Impar \n");
        for(i=1;i<=100;i+=2)
        {
            printf("%i \n",i);
        }
    }

    printf("Deseja continuar ? (1- Sim / 2 -nao) \n");
    scanf("%d",& resp);
    }
    while(resp==1);


    return 0;
}
