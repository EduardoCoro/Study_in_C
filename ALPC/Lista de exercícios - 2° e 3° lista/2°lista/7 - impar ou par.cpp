#include<conio.h>
#include<stdio.h>

main()
{
	int num1=0,par=0;
	
	
	
	printf("Digita um n�mero : \n");
	scanf("%i",&num1);
	
    par=num1%2;
	
	
	if(par==0)
	{
		
	printf("O n�mero %i � par",num1);
	
	}
	
	else if (par>0)
    {
    	
	printf("O n�mero %i � impar ",num1);
	
	}
  
  else
	{
		
    printf("Valor inv�lido!"); 
    
    }
	
	getch();
}
