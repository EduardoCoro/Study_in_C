#include<conio.h>
#include<stdio.h>

main()
{
	int idade=0,r=0;
	
	
	printf("Digita a sua idade : \n");
	scanf("%i",&idade);
		
	if(idade>=0 && idade<=17)
	{
		r=18-idade;
		printf("Voc? ? menor de idade e falta %i anos para completar a maioridade",r);
	}
	else
	{
	    r=idade-18;
		printf("Voc? ? maior de idade h? %i anos!!",r);
	}
	
	getch();
}
