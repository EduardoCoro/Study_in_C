/*
#include <stdio.h>

int main(){

    FILE *pFile;

    pFile = fopen("arquivo-dados.txt", "a+");

    if (pFile != NULL){

        const int tamanhoPalavra = 100;
        char palavra[tamanhoPalavra];

        printf("Digite uma palavra:");
        scanf("%s", palavra);

        fputs(palavra, pFile);
        //fputc('\n', pFile);

        fclose (pFile);
    }

    return 0;
}
*/
