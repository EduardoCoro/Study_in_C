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

        dadosPessoa pessoa;

        printf("Digite o nome:");
        scanf("%s", pessoa.nome);

        printf("Digite o sobrenome:");
        scanf("%s", pessoa.sobrenome);

        printf("Digite a idade:");
        scanf("%d", &pessoa.idade);

        fprintf(pFile, "%s\t%s\t%d\n",
                pessoa.nome,
                pessoa.sobrenome,
                pessoa.idade);

        fclose (pFile);
    }

    return 0;
}
*/
