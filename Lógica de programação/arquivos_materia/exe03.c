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

        int i;
        for (i = 0; i < tamanhoPalavra; i++){
            fputc(palavra[i], pFile);
        }

        fputc('\n', pFile);

        i = 0;
        while (palavra[i] != '\0'){
            fputc(palavra[i], pFile);
            i++;
        }

        fclose (pFile);
    }

    return 0;
}
*/
