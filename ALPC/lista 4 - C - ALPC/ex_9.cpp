#include<conio.h>
#include<stdio.h>

main()
{
   int primo=0,cont,rst,num,qtde;
   
   for(cont=1;cont<=10;cont++)
    {
               printf("Digita o %i número inteiro: \n",cont);
			   scanf("%i",& num);
    
			   primo=0;
			   for(rst=1;rst<=num;rst++)
               {
                       if((num%rst)==0)
                         
					   
					   
					      primo+=1;
                }
                       
					   if(primo>2)
                       {
                               qtde+=1;      
                       }
                       
					   else
                       {
                             
                       }
	
}
	printf("A quatidade de números é primos é : %i ",qtde);
	
 getch();

}
