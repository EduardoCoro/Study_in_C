#include<conio.h>
#include<stdio.h>

main()
{
    char st;
	float sal=0,result=0;

	
	
	printf("Seu setor � de Venda (s/n) ? \n");
	scanf("%c",&st);
	printf("Digita o seu sal�rio :  \n");
	scanf("%f",&sal);

	
	
	if(st=='s' || st=='S')
	{
		result=sal + (sal * (32.22/100) );
		printf("O Sal�rio final � de : R$%f",result);
	}
	else
	{
		
		printf("O Sal�rio final � de : R$%f",sal);
	}
	
	getch();
}
