#include<conio.h>
#include<stdio.h>

main()
{
   int primo,cont,rst;
   
   for(cont=1;cont<=100;cont++)
    {
               primo=0;
			   for(rst=1;rst<=cont;rst++)
               {
                       if((cont%rst)==0)
                         {
						 
						 primo+=1;
					  } 
					   
				
                }
                       
					   if(primo>2)
                       {
                        printf("O n�mero %i n�o e primo \n",cont);
                       }
                       
					   else if(primo=2)
                       {
                         
						 printf("O n�mero %i e primo \n",cont);  
                       }
    }
 
  getch();

}
