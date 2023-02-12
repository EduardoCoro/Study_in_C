#include <stdio.h>
#include <locale.h>


typedef struct {
	char placa[7];
	float velocidadeAferida;
	float velocidadeConsiderada;
	int excessoVelocidade; /*0-Não 1-Sim*/
} veiculo;


int atualizarVelocidadeConsiderada ( float veloAferida){
	float veloconsidera = veloAferida * 0.95;
	return veloconsidera;

}


void atualizarExcessoVelocidade (veiculo *veiculo){
    const float velocidadeMaximaPermitida = 80;
    veiculo->excessoVelocidade = 0;
    if (veiculo->velocidadeConsiderada > velocidadeMaximaPermitida){
        veiculo->excessoVelocidade = 1;
    }
}

void imprimirDadosVeiculo (veiculo *veiculo){
    printf("\nPlaca                 : %s", veiculo->placa);
    printf("\nVelocidade aferida    : %.2f", veiculo->velocidadeAferida);
    printf("\nVelocidade considerada: %.2f", veiculo->velocidadeConsiderada);
    printf("\nExcesso de velocidade : %d\n", veiculo->excessoVelocidade);
}

int main (){

    setlocale(LC_ALL,"portuguese");

	int numeroVeiculos = 0;

	printf("Informe o número de veículos: ");
	scanf("%d", &numeroVeiculos);

	veiculo veiculos[numeroVeiculos];

	int i = 0;
	float velo=0;

	do{
		printf("\nPlaca do veículo: ");
        scanf("%s", veiculos[i].placa);
        printf("Velocidade aferida do veículo em Km/h: ");
        scanf("%f", &veiculos[i].velocidadeAferida);

		velo=atualizarVelocidadeConsiderada(veiculos[i].velocidadeAferida);

       veiculos[i].velocidadeConsiderada=velo;

		atualizarExcessoVelocidade(&veiculos[i]);

		i++;
	} while (i < numeroVeiculos );

	printf("\nVeículos que excederam a velocidade máxima permitida:\n");

	for (i = 0; i < numeroVeiculos; i++){
		if (veiculos[i].excessoVelocidade == 1){
		    imprimirDadosVeiculo(&veiculos[i]);
		}
	}

	printf("\n\n");

	return 0;
}
