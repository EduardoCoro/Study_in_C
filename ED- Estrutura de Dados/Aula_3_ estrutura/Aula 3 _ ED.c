#include <stdio.h>
#include <stdlib.h>

typedef struct {
        char nome[20];
        int pago;
        char curso[10];
}aluno;

int main()
{
    int qdt=0, pessoas=0;

    printf("\n Informe a quantidade de alunos no churrasco: \n");
    scanf("%d", & qdt);

    aluno p[qdt];
    do{
        printf("\n Nome do Aluno: \n");
        scanf("%s",& p[pessoas].nome );

        printf("\n Informe o curso (abreviado) : \n ");
        scanf("%s", &  p[pessoas].curso);

        printf("\n Digite a situacao de pagante (sim - 1 / Nao - 2 ) : \n");
        scanf("%d",& p[pessoas].pago);

        pessoas++;
    }while(pessoas != qdt);


    printf("\n\n Controle de acesso dos pagantes \n\n\n");

    int i=0;

    printf("Integrantes pagos! \n\n");

    for(i=0;i<pessoas; i++){

        if ( p[i].pago == 1 )
        {
            printf("Aluno:  %s \n curso: %s  ",p[i].nome, p[i].curso);
        }
        printf("\n\n");
    }

     printf("Integrantes nao pagos! \n\n");

    for(i=0;i<pessoas; i++){

        if ( p[i].pago != 1 )
        {
            printf("Aluno:  %s \n curso: %s  ",p[i].nome, p[i].curso);
        }
        printf("\n\n");
    }


    return 0;
}
