#include <stdio.h>

typedef struct {
    int codigo;
    char nome[100];
    char sobrenome[100];
    int idade;
} dadosPessoa;

int main(){

    FILE *pFile;

    pFile = fopen("arquivo-dados-pessoas.txt", "a+");

    if (pFile != NULL){

        dadosPessoa pessoa;
        int continuar = 0;
        int codigo = 0;

        do {
            pessoa.codigo = ++codigo;

            printf("Digite o nome:");
            scanf("%s", pessoa.nome);

            printf("Digite o sobrenome:");
            scanf("%s", pessoa.sobrenome);

            printf("Digite a idade:");
            scanf("%d", &pessoa.idade);

            fprintf(pFile, "%d\t%s\t%s\t%d\n",
                    pessoa.codigo,
                    pessoa.nome,
                    pessoa.sobrenome,
                    pessoa.idade);

            printf("\nDeseja informar mais uma pessoa (0-não/1-sim)?");
            scanf("%d", &continuar);

        } while (continuar == 1);

        fclose (pFile);
    }

    return 0;
}
