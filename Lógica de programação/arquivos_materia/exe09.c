/*#include <stdio.h>
#include <locale.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int codigo;
    char nome[100];
    char sobrenome[100];
    Data dataNascimento;
} Cliente;

Cliente obterDadosCliente();
void gravarDadosCliente(FILE *, Cliente);
void imprimirDadosClientes(FILE *);
void imprimirDadosCliente(Cliente);

int main(void){

    setlocale(LC_ALL,"portuguese");

	printf("----------------------------------\n");
	printf("------ Cadastro de clientes ------\n");
	printf("----------------------------------\n");

    FILE *pFile;

    pFile = fopen("arquivo-dados-cliente.txt", "a+");

    if (pFile != NULL){

        int codigoCliente = 0;
        int continuar = 0;

        do {

            Cliente cliente = obterDadosCliente();
            cliente.codigo = ++codigoCliente;

            gravarDadosCliente(pFile, cliente);

            printf("\nDeseja informar mais um cliente (0-não/1-sim)?");
            scanf("%d", &continuar);

        } while (continuar == 1);

        fflush(pFile);

        fseek(pFile,0,SEEK_SET);

        imprimirDadosClientes(pFile);

        fclose (pFile);
    }

    return 0;
}

Cliente obterDadosCliente(){
    Cliente cliente;
    printf("\nDigite o nome:");
    scanf("%s", cliente.nome);
    printf("Digite o sobrenome:");
    scanf("%s", cliente.sobrenome);
    printf("Digite a data de nascimento (dd/mm/aaaa):");
    scanf("%d/%d/%d",
          &cliente.dataNascimento.dia,
          &cliente.dataNascimento.mes,
          &cliente.dataNascimento.ano);
    return cliente;
}

void gravarDadosCliente(FILE *pFile, Cliente cliente){
    fprintf(pFile, "%d\t%s\t%s\t%d\t%d\t%d\n ",
                    cliente.codigo,
                    cliente.nome,
                    cliente.sobrenome,
                    cliente.dataNascimento.dia,
                    cliente.dataNascimento.mes,
                    cliente.dataNascimento.ano);
}

void imprimirDadosClientes(FILE *pFile){

    Cliente cliente;
    int i = 0;

    while (fscanf(pFile, "%d\t%s\t%s\t%d\t%d\t%d\n",
                    &cliente.codigo,
                    cliente.nome,
                    cliente.sobrenome,
                    &cliente.dataNascimento.dia,
                    &cliente.dataNascimento.mes,
                    &cliente.dataNascimento.ano) != EOF){
        imprimirDadosCliente(cliente);
        i++;
    }
}

void imprimirDadosCliente(Cliente cliente){
    printf("\n---------------------------------\n");
    printf("Codigo: %d\n", cliente.codigo);
    printf("Nome: %s\n", cliente.nome);
    printf("Sobrenome: %s\n", cliente.sobrenome);
    printf("Data nascimento: %d/%d/%d",
           cliente.dataNascimento.dia,
           cliente.dataNascimento.mes,
           cliente.dataNascimento.ano);
    printf("\n----------------------------------\n");
}
*/
