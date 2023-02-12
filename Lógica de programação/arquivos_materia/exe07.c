/*
#include <stdio.h>

int main(){

    printf("\nValor de EOF: %d\n\n", EOF);

    FILE *pFile;

    pFile = fopen("arquivo-dados.txt", "a+");

    if (pFile != NULL){

        printf("\n---Leitura com fget - caracter a caracter--\n");
        char ch;
        while ((ch = fgetc(pFile)) != EOF){
            printf("%c" , ch);
        }

        fseek(pFile, 0, SEEK_SET);

        printf("\n---Leitura com fgets - linha a linha--\n");
        char linha[300];
        while ((fgets(linha, 100, pFile)) != NULL){
            printf("%s" , linha);
        }

        fclose (pFile);
    }

    return 0;
}
*/
