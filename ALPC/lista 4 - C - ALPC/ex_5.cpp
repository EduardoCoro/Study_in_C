#include<conio.h>
#include<stdio.h>

main()
{
	int cont,tb=0,num=0;
	
	printf("Tabuada do n�mero? \n");
	scanf("%i",& num);
	
	for(cont=0;cont<=10;cont++)
	{
		tb=num;
		tb= cont *tb;
		printf(" A tabuada  %i x %i = %i \n",num,cont,tb);
	}
	
	getch();
}
