#include<conio.h>
#include<stdio.h>

main()
{
	int cod=0,v1=0,v2=0,result=0;
	
	printf("Digita um n�mero : \n");
	scanf("%i",&v1);
	
	printf("Digita outro n�mero : \n");
	scanf("%i",&v2);
	
	printf("Digita o c�digo(1,2,3,4) : \n");
	scanf("%i",&cod);
    
	if(cod==1)
	{
		result=v1+v2;
		printf("O resultado da Soma � : %i",result);
	}
	else if (cod==2)
	{
		result=v1-v2;
		printf("O resultado da Subtra��o � : %i",result);
	}
	else if (cod==3)
	{
		result=v1/v2;
		printf("O resultado da divis�o � : %i",result);
	}
	else if (cod==4)
	{
		result=v1*v2;
		printf("O resultado da multiplica��o � : %i",result);
	}
	else
	{
		printf("C�digo errado !");
	}
	
getch();
}
