#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int existeMatricula(int[], int, int);
void faltasmedias(int falt , char* stc, int md);


typedef struct{

      char nome[100];
      int faltas;
      float notasAluno[4];
      float mediaAluno;
      char situacao[10];
      int matr;

}aluno;

void imprimirDadosAluno (aluno *aluno);

int main()
{
    setlocale(LC_ALL,"portuguese");

    char nomeDisciplina[100];
    int numeroAlunos=0 , i=0 , j=0, aux=0;
    int matricula=0;
    float media=0 ;


    printf("Informe a disciplina: \n ");
    scanf("%s", nomeDisciplina);

    printf("\n Informe o numero de alunos da disciplina:  \n");
    scanf("%d", &numeroAlunos);


        int matriculas[numeroAlunos];


    aluno alunos[numeroAlunos];

    do{
            printf("\n \n -- Para o %d aluno  informe --\n \n ",i + 1 );

             for(aux=0; aux < 1 ; aux++)
             {
              printf("\n Informe  Matricula -  :  \n");
              scanf("%d", & matricula);

              if (numeroAlunos==1)
              {
                alunos[i].matr=matricula;
              }
              else
              {

                if (existeMatricula(matriculas, numeroAlunos , matricula) == 1)
                {
                  printf("\n A matricula - ' %d  ' - ja foi armazenada. Informe outra por favor!\n \n ", matricula);
                  aux--;
                }
                else
                {
                 matriculas[i] = matricula;
                 alunos[i].matr=matricula;
                 aux=2;
                }
              }
             }
          printf("Nome do aluno:   \n \n");
          scanf("%s", alunos[i].nome);

          for(j=0; j < 4 ; j++)
          {
              printf("\n Informe a %d nota :  \n ", j + 1 );
              scanf("%f", & alunos[i].notasAluno[j]);
              media+= alunos[i].notasAluno[j];
          }

          printf("\n Percentual de faltas :  ");
          scanf("%d", & alunos[i].faltas);

          media /= 4;
          alunos[i].mediaAluno= media;

          faltasmedias(alunos[i].faltas, alunos[i].situacao, alunos[i].mediaAluno);

        i++;
    }while(i <  numeroAlunos);

    printf("\n\n Disciplina -   %s   \n\n" , nomeDisciplina);
    for (i = 0; i < numeroAlunos; i++)
    {
        printf("\n\n");
        imprimirDadosAluno(&alunos[i]);
	}

    return 0;
}

int existeMatricula(int matriculasM[], int nroMatriculas, int nroMatricula){
    int a=0;
    for (a = 0; a < nroMatriculas; a++){
        if (matriculasM[a] == nroMatricula){
            return 1;
        }
    }
}

void faltasmedias(int falt, char* stc, int md)
{
    if (75 < falt){
            strcpy(stc, "Reprovado");
        }else{
            if (md < 3){
                strcpy(stc ,"Reprovado");
            }else if (md < 6){
                strcpy(stc, "Exame");
            }else{
                strcpy(stc, "Aprovado");
            }
        }
}
void imprimirDadosAluno (aluno *aluno){
    int j=0;
    printf("\n   Numero matricula - %d ", aluno->matr);
    printf("\n   Nome: %s", (*aluno).nome);
    for(j=0; j < 4 ; j++){
        printf("\n   Nota %d : %.2f", j+1 , (*aluno).notasAluno[j]);
    }
    printf("\n   media :     %.2f", aluno->mediaAluno);
    printf("\n   Porcentual de faltas : %d %", aluno->faltas);
    printf("\n   Situacao aluno - '   %s   ' ", aluno->situacao);
}
