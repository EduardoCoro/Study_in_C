#include<conio.h>
#include<stdio.h>

main()
{
	int num1=0,result=0;
	
	
	
	printf("Digita um n�mero : \n");
	scanf("%i",&num1);
	
        result=num1 * num1;
	
	
	if(result> 7)
	{
		result=result + 3;
		printf("O novo n�mero � de : %i",result);
	}
	else
	{
		
		printf("O Resultado � : %i",result);
	}
	
	getch();
}
