#include<conio.h>
#include<stdio.h>

main()
{
	int dv=0,num1=0,dv1=0;
	
	
	printf("Digita um n�mero : \n");
	scanf("%i",&num1);
	
	dv=num1%5;	
	dv1=num1%3;
	
	if(dv==0 && dv1==0)
	{
		
		printf("O n�mero � divis�vel por 5 e 3");
	}
	else
	{
	    
		printf("N�o � divis�vel por 5 e 3");
	}
	
	getch();
}
