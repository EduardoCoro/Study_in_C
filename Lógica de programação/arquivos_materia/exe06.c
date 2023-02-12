/*
#include <stdio.h>

typedef struct {
    char nome[100];
    char sobrenome[100];
    int idade;
} dadosPessoa;

int main(){

    FILE *pFile;

    pFile = fopen("arquivo-dados-pessoa.txt", "a+");

    if (pFile != NULL){

        int numeroPessoas = 0;
        printf("Informe o numero de pessoas que deseja cadastrar:");
        scanf("%d", &numeroPessoas);

        dadosPessoa pessoa[numeroPessoas];

        int i;
        for (i = 0; i < numeroPessoas; i++){

            printf("Digite o nome:");
            scanf("%s", pessoa[i].nome);

            printf("Digite o sobrenome:");
            scanf("%s", pessoa[i].sobrenome);

            printf("Digite a idade:");
            scanf("%d", &pessoa[i].idade);

            fprintf(pFile, "%s\t%s\t%d\n",
                    pessoa[i].nome,
                    pessoa[i].sobrenome,
                    pessoa[i].idade);
        }

        fclose (pFile);
    }

    return 0;
}
*/
