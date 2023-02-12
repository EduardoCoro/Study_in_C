#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


typedef struct pessoa {
	/*int codigo; ------------- codigo de aluno*/
	char nome[20];
	unsigned int ra;
	char status;
	pessoa *prox;
};

int main()
{
    
	
	getchar();
	return 0;
}
