#include<conio.h>
#include<stdio.h>
#define max 10

main()
{
	int cont, v[max];
	
	
	for(cont=1;cont<=max;cont++)
	{
		printf(" Digite o %i :  \n",cont);
		scanf("%i",& v[cont]);
	}
	
	printf("\n");
	for(cont=1;cont<=max;cont++)
	{
		printf(" %i ° =  %i \n",cont,v[cont]);
	}
	
	printf("\n");
	for(cont=1;cont<=max;cont++)
	{
		if(v[cont]==0)
		{
			printf("o seu  %i está na posicao %i \n",v[cont],cont);
		}
	}
	
	
	
	
	
	getch();
}
