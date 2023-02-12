#include <stdio.h>
#include <stdlib.h>
#include <time.h>     // biblioteca de tempo

int main()
{
    int resp=0 , opc_jg=0 , opc_pc=0, ganhou=0, perdeu=0;


    printf(" ----- Jo Ken Po ----- \n\n");
    printf("   -----   Opcao : 0 - Pedra   ,   1 - Papel   ,   2 - Tesoura   ----- \n\n");

    do
    {
        srand(time(NULL));

        printf("\n\n");

        opc_pc= rand()%3;

        printf("Escolha a opcçao :  \n");
        scanf("%i", & opc_jg);


        if(opc_jg==opc_pc)
        {
            printf("\n      Empate   \n");
        }
        else if(opc_jg==0 && opc_pc==2   ||   opc_jg==1 && opc_pc==0 ||  opc_jg==2 && opc_pc==1)
        {
            printf("\n --- Voce ganhou ! --- \n opcao do jogador : %i \n opcao do PC : %i \n",opc_jg,opc_pc);
            ganhou+=1;
        }
        else
        {
            printf("\n --- Voce perdeu ! --- \n opcao do jogador : %i \n opcao do PC : %i \n",opc_jg,opc_pc);
            perdeu+=1;
        }


    printf("\n ----- Deseja continuar ? (1 - Sim / 2 - Nao ) ----- \n");
    scanf("%i",& resp );

    }while(resp==1);


    printf("\n Resultado :  \n Ganhou : %i  \n Perdeu : %i \n",ganhou,perdeu);


    return 0;
}
