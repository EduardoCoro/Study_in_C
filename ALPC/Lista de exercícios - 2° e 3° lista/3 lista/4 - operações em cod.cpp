#include<conio.h>
#include<stdio.h>

main()
{
	int cod=0,v1=0,v2=0,result=0;
	
	printf("Digita um número : \n");
	scanf("%i",&v1);
	
	printf("Digita outro número : \n");
	scanf("%i",&v2);
	
	printf("Digita o código(1,2,3,4) : \n");
	scanf("%i",&cod);
    
	if(cod==1)
	{
		result=v1+v2;
		printf("O resultado da Soma é : %i",result);
	}
	else if (cod==2)
	{
		result=v1-v2;
		printf("O resultado da Subtração é : %i",result);
	}
	else if (cod==3)
	{
		result=v1/v2;
		printf("O resultado da divisão é : %i",result);
	}
	else if (cod==4)
	{
		result=v1*v2;
		printf("O resultado da multiplicação é : %i",result);
	}
	else
	{
		printf("Código errado !");
	}
	
getch();
}
