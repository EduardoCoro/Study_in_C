#include<conio.h>
#include<stdio.h>

main()
{
	int cont=1,num=0,cal=0,maior=0,menor=0;
	
	
	
	while(cont<=10)
	{
		printf("Digita o %i ° número : \n",cont);
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
		   
		   cont+=1;
	}
	
		
		printf("o maior e  %i e o  menor e %i ",maior,menor);
	
	
	getch();
}
