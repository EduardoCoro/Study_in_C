#include<conio.h>
#include<stdio.h>

main()
{
	int num1;
	
	printf("Digita um número:  \n");
	scanf("%i",&num1);
	
	if(num1>=100)
	{
		printf("Número maior ou igual a 100");
	}
	else
	{
		printf("Número menor que 100");
	}
	
	getch();
}
