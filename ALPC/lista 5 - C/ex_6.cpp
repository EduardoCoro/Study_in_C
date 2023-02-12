#include<conio.h>
#include<stdio.h>

main()
{
	int cont=1,num=0,cal=0;
	
	
	
	while(cont<=10)
	{
		printf("Digita o %i ° número : \n",cont);
	    scanf("%i",& num);
	    
	    if(num>18)
	     {
	     	cal+=1;
	     	
	     }
	     cont+=1;
	}
	
	
		
		printf("A quantidade de numeros maiores que 18 foram :  %i numero(s)",cal);
	
	
	getch();
}
