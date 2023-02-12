#include<conio.h>
#include<stdio.h>

main()
{
	int dv=0,num1=0,dv1=0;
	
	
	printf("Digita um número : \n");
	scanf("%i",&num1);
	
	dv=num1%5;	
	dv1=num1%3;
	
	if(dv==0 && dv1==0)
	{
		
		printf("O número é divisível por 5 e 3");
	}
	else
	{
	    
		printf("Não é divisível por 5 e 3");
	}
	
	getch();
}
