#include<conio.h>
#include<stdio.h>

main()
{
   int cont,resto;
   
      for (cont=1;cont<=20;cont++)
	  {
	  	        if ((cont%4)==0)
	  	        {
	  	        	resto=0;
	  	        }
	  	        
	  	        if (resto==0)
	  	        {
	  	        	printf("� divis�vel por 4 s�o : %i \n",cont);
	  	        }
	  	
	  }  
   
   
 getch();

}
