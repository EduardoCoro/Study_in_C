#include<conio.h>
#include<stdio.h>

main()
{
	int cont,num=0,cal=0,maior=0,menor=0;
	
	
	
	for(cont=1;cont<=10;cont++)
	{
		printf("Digita o %i � n�mero : \n",cont);
	    scanf("%i",& num);
	    
	    if(cont==1)
	       { 
	     	 maior=num;
	     	 menor=num;
	       }
	      if(num>maior)
	       {
	     	  maior=num;
		   }
		    if (num<menor)
		   {
		   	  menor=num;
		   }
	}
	
		
		printf("o maior e  %i e o  menor e %i ",maior,menor);
	
	
	getch();
}
