/*#include <stdio.h>
#include <locale.h>

typedef struct{
        int cpf;
        char rg[15];
} Registro;

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
    Registro dados;
} Cliente;

Cliente obterDadosCliente();
void gravarDadosCliente(FILE *, Cliente);
void imprimirDadosClientes(FILE *);
void imprimirDadosCliente(Cliente);

int main(void){

    setlocale(LC_ALL,"portuguese");

	printf("----------------------------------\n");
	printf("------ Cadastro de clientes ------\n");
	printf("---   RG   ---   CPF   ---\n");

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
    printf("\n Digite o nome:");
    scanf("%s", cliente.nome);
    printf("Digite o sobrenome:");
    scanf("%s", cliente.sobrenome);
    printf("Digite a data de nascimento (dd/mm/aaaa):");
    scanf("%d/%d/%d",
          &cliente.dataNascimento.dia,
          &cliente.dataNascimento.mes,
          &cliente.dataNascimento.ano);
    printf("Digite o número do R.G  (Atenção: informe com os pontos) :  ");
    scanf("%s", cliente.dados.rg);
    printf("Digite o número do C.P.F (Atenção: Somente os numeros) :  ");
    scanf("%d", & cliente.dados.cpf);

    return cliente;
}

void gravarDadosCliente(FILE *pFile, Cliente cliente){
    fprintf(pFile, "%d\t%s\t%s\t%d\t%d\t%d\n RG-\t %s \n CPF-\t %d",
                    cliente.codigo,
                    cliente.nome,
                    cliente.sobrenome,
                    cliente.dataNascimento.dia,
                    cliente.dataNascimento.mes,
                    cliente.dataNascimento.ano,
                    cliente.dados.rg,
                    cliente.dados.cpf);
}

void imprimirDadosClientes(FILE *pFile){

    Cliente cliente;


    while (fscanf(pFile, "%d\t%s\t%s\t%d\t%d\t%d\t%s\t%d\n",
                    &cliente.codigo,
                    cliente.nome,
                    cliente.sobrenome,
                    &cliente.dataNascimento.dia,
                    &cliente.dataNascimento.mes,
                    &cliente.dataNascimento.ano,
                    cliente.dados.rg,
                    &cliente.dados.cpf) != EOF)
                    {
        imprimirDadosCliente(cliente);

    }
}

void imprimirDadosCliente(Cliente cliente){
    printf("\n---------------------------------\n");
    printf("Codigo: %d\n", cliente.codigo);
    printf("Nome: %s\n", cliente.nome);
    printf("Sobrenome: %s\n", cliente.sobrenome);
    printf("Data nascimento: %d/%d/%d \n",
           cliente.dataNascimento.dia,
           cliente.dataNascimento.mes,
           cliente.dataNascimento.ano);
    printf("RG - %s \n ", cliente.dados.rg);
    printf("CPF - %d  ", cliente.dados.cpf);
    printf("\n----------------------------------\n");
}
*/

