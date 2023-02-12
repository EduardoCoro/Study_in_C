/*#include <stdio.h>

int main(){

    FILE *pFile;

    pFile = fopen("arquivo.txt", "a"); //r, w, a, r+, w+, a+

    printf("\nEndereco de pFile: %p", pFile);
    printf("\nValor de NULL: %p", NULL);

    if (pFile == NULL){
        printf("\nERRO! O arquivo nao foi aberto!\n");
    }else{
        printf("\nO arquivo foi  criado / aberto com sucesso!\n");
        fclose(pFile);
    }

    return 0;
}
*/
/*
    r  -> Abre um arquivo texto para leitura.
          O arquivo deve existir antes de ser aberto.
    w  -> Abrir um arquivo texto para grava��o.
          Se o arquivo n�o existir, ele ser� criado.
          Se j� existir, o conte�do anterior ser� destru�do.
    a  -> Abrir um arquivo texto para grava��o.
          Os dados ser�o adicionados no fim do arquivo ("append"),
          se ele j� existir, ou um novo arquivo ser� criado,
          no caso de arquivo n�o existente anteriormente.
    r+ -> Abre um arquivo texto para leitura e grava��o.
          O arquivo deve existir e pode ser modificado.
    w+ -> Cria um arquivo texto para leitura e grava��o.
          Se o arquivo existir, o conte�do anterior ser� destru�do.
          Se n�o existir, ser� criado.
    a+ -> Abre um arquivo texto para grava��o e leitura.
          Os dados ser�o adicionados no fim do arquivo se ele j� existir,
          ou um novo arquivo ser� criado,
          no caso de arquivo n�o existente anteriormente.
*/
