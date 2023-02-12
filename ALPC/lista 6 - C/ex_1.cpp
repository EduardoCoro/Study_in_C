#include<conio.h>
#include<stdio.h>
#define max 40

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
		printf("\n %i",v[cont]);
	}
	
	
	for(cont=1;cont<=max;cont++)
	{
		if(v[cont]<0)
		{
			v[cont]=0;
		}
	}
	
	printf("\n");
	
	for(cont=1;cont<=max;cont++)
	{
		printf("%i",v[cont]);
	}
	
	
	getch();
}
