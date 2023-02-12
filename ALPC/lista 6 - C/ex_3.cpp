#include<conio.h>
#include<stdio.h>
#define max 20

main()
{
	int cont, v[max],sm;
	
	
	for(cont=1;cont<=max;cont++)
	{
		printf(" Digite o %i :  \n",cont);
		scanf("%i",& v[cont]);
	}
	
	
	printf("\n");
	for(cont=1;cont<=max;cont++)
	{
		if(v[cont]>10)
		{
			sm++;
			pri
			printf("o seu %i é maior \n",v[cont]);
		}
	}
	
	printf(" a quantidade e de %i ",sm);
	
	
	
	getch();
}
