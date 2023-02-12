
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){



	printf("---------------------------\n");
	printf("------ Exe08: Alunos ------\n");
	printf("---------------------------\n");

    char nomeDisciplina[100];
    int numeroAlunos;

    printf("Informe a disciplina:");
    scanf("%s", nomeDisciplina);

    printf("Informe o numero de alunos da disciplina:");
    scanf("%d", &numeroAlunos);

    int matriculas[numeroAlunos];
    char nomes[numeroAlunos][100];
    float notas[numeroAlunos * 4];
    float medias[numeroAlunos];
    float faltas[numeroAlunos];
    char situacao[numeroAlunos][10];

    int i, j, deslocamentoVetorNotas = 0;
    const int qtdeNotas = 4;
    float media;

    for (i = 0; i < numeroAlunos; i ++){
        media = 0;

        printf("\n-- Para o aluno %d informe --\n", i + 1);
        printf("Matricula: ");

        scanf("%d", &matriculas[i]);

        printf("Nome: ");
        scanf("%s", nomes[i]);

        for (j = 0; j < qtdeNotas; j++){
            printf("Nota bimestre %d:", j + 1);
            scanf("%f", &notas[j + deslocamentoVetorNotas]);
            media += notas[j + deslocamentoVetorNotas];
        }
        deslocamentoVetorNotas += qtdeNotas;

        printf("Percentual de faltas: ");
        scanf("%f", &faltas[i]);

        media /= qtdeNotas;
        medias[i] = media;

        if (75 < faltas[i]){
            strncpy(situacao[i], "Reprovado", sizeof(situacao[i]));
        }else{
            if (media < 3){
                strncpy(situacao[i], "Reprovado", sizeof(situacao[i]));
            }else if (media < 6){
                strncpy(situacao[i], "Em Exame", sizeof(situacao[i]));
            }else{
                strncpy(situacao[i], "Aprovado", sizeof(situacao[i]));
            }
        }
    }

    printf("\n\n-- Lista de alunos de %s --\n\n", nomeDisciplina);
    deslocamentoVetorNotas = 0;
    for (i = 0; i < numeroAlunos; i ++){
        printf("\nMatricula: %d", matriculas[i]);
        printf("\nAluno: %s", nomes[i]);
        for (j = 0; j < qtdeNotas; j++){
            printf("\nNota bimestre %d: %.2f", j + 1, notas[j + deslocamentoVetorNotas]);
        }
        deslocamentoVetorNotas += qtdeNotas;
        printf("\nMedia: %.2f", medias[i]);
        printf("\nFaltas: %.2f", faltas[i]);
        printf("\nSituacao: %s", situacao[i]);
        printf("\n");
    }

    return 0;
}

