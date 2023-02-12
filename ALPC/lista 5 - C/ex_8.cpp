#include<conio.h>
#include<stdio.h>

main()
{
   int primo,cont=1,rst;
   
   while(cont<=100)
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
                        printf("O número %i não e primo \n",cont);
                       }
                       
					   else if(primo=2)
                       {
                         
						 printf("O número %i e primo \n",cont);  
                       }
	cont++;
    }
 
  getch();

}
