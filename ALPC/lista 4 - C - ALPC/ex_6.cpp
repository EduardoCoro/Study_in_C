#include<conio.h>
#include<stdio.h>

main()
{
	int cont,num=0,cal=0;
	
	
	
	for(cont=1;cont<=10;cont++)
	{
		printf("Digita o %i ° número : \n",cont);
	    scanf("%i",& num);
	    
	    if(num>18)
	     {
	     	cal+=1;
	     	
	     }
	}
	
	
		
		printf("A quantidade de números maiores que 18 é :  %i ",cal);
	
	
	getch();
}
