#include<conio.h>
#include<stdio.h>

main()
{
	int cont=1,tb=0,tba;
	
	printf("Digita o numero da tabuada que deseja : \n");
	scanf("%i",& tb);
	
	while(cont<=10)
	{
		
		tba= cont *tb;
		printf(" A tabuada do %i x %i = %i \n",tb,cont,tba);
		cont+=1;
		
	}
	

	
	getch();
}
