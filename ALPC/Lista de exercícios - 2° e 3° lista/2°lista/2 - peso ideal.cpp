#include<conio.h>
#include<stdio.h>

main()
{
    char sexo;
	float altura=0,pi=0;

	
	
	printf("Digita o sexo (M/F) : \n");
	scanf("%c",&sexo);
	printf("Digita a altura:  \n");
	scanf("%f",&altura);

	
	
	if(sexo=='m' || sexo=='M')
	{
		pi=(altura*altura) * 23;
		printf("O peso ideal � de %f",pi);
	}
	else
	{
		pi=(altura*altura) * 22;
		printf("O peso ideal � de %f",pi);
	}
	
	getch();
}
