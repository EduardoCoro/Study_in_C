#include<conio.h>
#include<stdio.h>

main()
{
	int cont,tb9=0;
	
	for(cont=0;cont<=10;cont++)
	{
		tb9=9;
		tb9= cont *tb9;
		printf(" A tabuada  9 x %i = %i \n",cont,tb9);
	}
	
	getch();
}
