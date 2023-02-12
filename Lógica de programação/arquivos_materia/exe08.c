/*
#include <stdio.h>

typedef struct {
    int codigo;
    char nome[100];
    char sobrenome[100];
    int idade;
} dadosPessoa;

void imprimirDadosPessoa(dadosPessoa);

int main(){

    FILE *pFile;

    pFile = fopen("arquivo-dados-pessoa.txt", "a+");

    if (pFile != NULL){

        dadosPessoa pessoa;

        int i = 0;
        int carregando = EOF;
        do{
            carregando = fscanf(pFile, "%d\t%s\t%s\t%d\n",
                                &pessoa.codigo,
                                pessoa.nome,
                                pessoa.sobrenome,
                                &pessoa.idade);
            imprimirDadosPessoa(pessoa);
            i++;
        } while (carregando != EOF);


        fseek(pFile, 0, SEEK_SET);


        int i = 0;
        while (fscanf(pFile, "%d\t%s\t%s\t%d\n",
                      &pessoa.codigo,
                      pessoa.nome,
                      pessoa.sobrenome,
                      &pessoa.idade) != EOF)
        {
            imprimirDadosPessoa(pessoa);
            i++;
        }


        fclose (pFile);
    }

    return 0;
}

void imprimirDadosPessoa(dadosPessoa dados){
    printf("\n---------------------------------\n");
    printf("Codigo: %d\n", dados.codigo);
    printf("Nome: %s\n", dados.nome);
    printf("Sobrenome: %s\n", dados.sobrenome);
    printf("Idade: %d\n", dados.idade);
    printf("\n----------------------------------\n");
}
*/
