#include <stdio.h>
#include <locale.h>

int existeMatricula(int[], int, int);

int main(){

    setlocale(LC_ALL,"portuguese");

	printf("-------------------------------\n");
	printf("------ Exe03: Matrículas ------\n");
	printf("-------------------------------\n");

    int nroMatriculas = 0;

    printf("Informe quantas matrículas deseja armazenar:");
    scanf("%d", &nroMatriculas);

    int matriculas[nroMatriculas];

    int i, matricula = 0;
    for (i = 0; i < nroMatriculas; i++){
        printf("Digite uma matrícula:");
        scanf("%d", &matricula);

        if (existeMatricula(matriculas, nroMatriculas, matricula) == 1){
            printf("A matrícula %d já foi armazenada. Informe outra por favor!\n", matricula);
            i--;
        }else{
            matriculas[i] = matricula;
        }
    }

    printf("\nMatrículas: ");
    for(i = 0; i < nroMatriculas; i++){
        printf(" %d ", matriculas[i]);
    }

    return 0;
}

int existeMatricula(int matriculas[], int nroMatriculas, int nroMatricula){
    int i;
    for (i = 0; i < nroMatriculas; i++){
        if (matriculas[i] == nroMatricula){
            return 1;
        }
    }
    return 0;
}
