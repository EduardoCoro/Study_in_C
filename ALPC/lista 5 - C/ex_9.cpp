#include<conio.h>
#include<stdio.h>

main()
{
   int cont=1,resto;
   
      while (cont<=20)
	  {
	  	        if ((cont%4)==0)
	  	        {
	  	        	resto=0;
	  	        }
	  	        
	  	        if (resto==0)
	  	        {
	  	        	printf("� divis�vel por 4 s�o : %i \n",cont);
	  	        }
	  	cont++;
	  }  
   
   
 getch();

}
