/*
#include <stdio.h>

//utilizando estrutura para definição de um tipo de dados
typedef struct {
	char nome[100];
	float notasProgramacao[2];
	int numeroFaltas;
} aluno;

void imprimirDadosAluno (aluno *aluno){
    printf("\nNome: %s", (*aluno).nome);
    printf("\nNota 1: %.2f", (*aluno).notasProgramacao[0]);
    printf("\nNota 2: %.2f", aluno->notasProgramacao[1]);
    printf("\nFaltas: %d", aluno->numeroFaltas);
}

int main (){

    int numeroAlunos = 0;

	printf("Informe o numero de alunos: ");
	scanf("%d", &numeroAlunos);

	aluno alunos[numeroAlunos];

	int i = 0;

	do{
		printf("Nome do aluno: ");
        scanf("%s", alunos[i].nome);

		printf("Nota 1: ");
        scanf("%f", &alunos[i].notasProgramacao[0]);

        printf("Nota 2: ");
        scanf("%f", &alunos[i].notasProgramacao[1]);

		printf("Faltas: ");
        scanf("%d", &alunos[i].numeroFaltas);

		i++;
	} while (i < numeroAlunos);

	for (i = 0; i < numeroAlunos; i++){
        imprimirDadosAluno(&alunos[i]);
	}

	return 0;
}
*/
