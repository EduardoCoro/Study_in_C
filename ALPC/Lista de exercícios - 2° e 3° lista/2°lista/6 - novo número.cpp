#include<conio.h>
#include<stdio.h>

main()
{
	int num1=0,result=0;
	
	
	
	printf("Digita um número : \n");
	scanf("%i",&num1);
	
        result=num1 * num1;
	
	
	if(result> 7)
	{
		result=result + 3;
		printf("O novo número é de : %i",result);
	}
	else
	{
		
		printf("O Resultado é : %i",result);
	}
	
	getch();
}
