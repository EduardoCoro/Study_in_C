#include<conio.h>
#include<stdio.h>

main()
{
	int num1;
	
	printf("Digita um n�mero:  \n");
	scanf("%i",&num1);
	
	if(num1>=100)
	{
		printf("N�mero maior ou igual a 100");
	}
	else
	{
		printf("N�mero menor que 100");
	}
	
	getch();
}
