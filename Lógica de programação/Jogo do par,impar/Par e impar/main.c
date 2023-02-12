#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Usado para trabalhar com relogio do pc


int main()
{
    int ganhou=0, perdeu=0 ,num=0, opc=0, sm=0, resp=0;


    printf("Jogo do Par e impar ! \n\n");

    do
    {

    printf("\n\n");

    printf("     Escolha a opçao     ( 1 - Impar /   2 -  Par ) : \n");
    scanf("%i",& opc);

    printf("   Digita o seu numero :   \n");
    scanf("%i",& num);



    srand(time(NULL));
    sm= num + (rand() % 9 + 1) % 2;


    printf("\n\n");



    if(opc==1 && sm !=0 || opc==2 && sm ==0 )
    {

       printf("   -----   Voce ganhou !   -----  \n");
       ganhou+=1;

    }
    else
    {
        printf("   -----   Voce Perdeu !   -----  \n");
        perdeu+=1;
    }

    printf("\n\n");

    printf("----- Deseja continuar ?   ( 1- SIM / 2- NAO ) -----\n");
    scanf("%i", & resp);

    }while(resp==1);

    printf("\n\n");

    printf("Jogo Encerrado ! \n  Voce ganhou : %i  \n  Perdeu : %i  \n ",ganhou,perdeu);


    return 0;
}
