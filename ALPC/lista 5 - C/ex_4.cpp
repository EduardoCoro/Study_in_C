#include<conio.h>
#include<stdio.h>

main()
{
	int cont=1,tb9=0;
	
	do
	{
		tb9=9;
		tb9= cont *tb9;
		printf(" A tabuada  9 x %i = %i \n",cont,tb9);
		cont+=1;
	}
	while(cont<=10);

	
	getch();
}
