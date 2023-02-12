#include <stdio.h>
#include <stdlib.h>


typedef struct {
	    /*int codigo; ------------- codigo de aluno*/
        char nome[20];
        int pago;
        char curso[10];
}aluno;

int main()
{
    int qdt=0, pessoas=0, resp=0, pago_sim=0, pago_nao=0;
    aluno p[pessoas];

do{
    printf("\n Deseja cadastrar novo integrante(1 - sim / 0 - nao) ? \n");
    scanf("%d", & resp);

	if(resp==1){

	    while(resp != 0)
	    {


			/* Codigo automático e verificar cod iguais e alterar */


            printf("\n Nome do Aluno: \n");
            scanf("%s",& p[pessoas].nome );

            printf("\n Informe o curso (abreviado) : \n ");
            scanf("%s", &  p[pessoas].curso);

            printf("\n Deseja efetuar o pagamento (SIM - 1 / NAO - 2 ) ?  \n");
            scanf("%d",& p[pessoas].pago);

			if(p[pessoas].pago ==1){
				pago_sim++;
			}
			else{
				pago_nao++;
			}

            pessoas++;
		    qdt++; /* Variavel global */

			printf("\n\n Cadastro Concluido \n\n");

		    printf("\n\n Deseja cadastrar novamente ( 1 - SIM / 0 - NAO) ?)");
		    scanf("%d",& resp);
		}
    }
	resp=0;


    printf("\n\n\n Controle de acesso dos pagantes \n\n Total : %d aluno(as) \n\n\n Quer solicitar consulta de pagantes(1-SIM/2-NAO)? \n\n", qdt);
    scanf("%d",& resp);

	if(resp ==1)
	{
        int i=0;

        printf("\n\n \n PAGOS ------ %d integrantes pagos! \n\n",pago_sim);

        for(i=0;i<pessoas; i++)
		{

            if ( p[i].pago == 1 )
            {
               printf("Aluno:  %s \n curso: %s  ",p[i].nome, p[i].curso);
            }
            printf("\n\n");
        }

        printf("NAO PAGOS ------ %d integrantes nao pagos! \n\n",pago_nao);

        for(i=0;i<pessoas; i++)
		{

            if ( p[i].pago != 1 )
            {
                printf("Aluno:  %s \n curso: %s  ",p[i].nome, p[i].curso);
            }
            printf("\n\n");
        }
	}
    resp=0;

	printf("\n\n Deseja inicializar, reiniciar, o sistema ( 1 - SIM / 2 - NAO) ?");
	scanf("%d",& resp);

}while(resp==1);


	printf("\n\n\n\n\n --- Sistema encerrado ---- \n\n");
    return 0;
}
