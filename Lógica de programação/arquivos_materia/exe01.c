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
    w  -> Abrir um arquivo texto para gravação.
          Se o arquivo não existir, ele será criado.
          Se já existir, o conteúdo anterior será destruído.
    a  -> Abrir um arquivo texto para gravação.
          Os dados serão adicionados no fim do arquivo ("append"),
          se ele já existir, ou um novo arquivo será criado,
          no caso de arquivo não existente anteriormente.
    r+ -> Abre um arquivo texto para leitura e gravação.
          O arquivo deve existir e pode ser modificado.
    w+ -> Cria um arquivo texto para leitura e gravação.
          Se o arquivo existir, o conteúdo anterior será destruído.
          Se não existir, será criado.
    a+ -> Abre um arquivo texto para gravação e leitura.
          Os dados serão adicionados no fim do arquivo se ele já existir,
          ou um novo arquivo será criado,
          no caso de arquivo não existente anteriormente.
*/
