#include<conio.h>
#include<stdio.h>

main()
{
	int n1=0,n2=0,cont;
	
	printf("Digite o 1� n�mero \n");
	scanf("%i",& n1);
	printf("Digite o 2� n�mero \n");
	scanf("%i",& n2);
	
	if(n1<n2)
	{
	    cont=n1;
	        while(cont<=n2)
	       {
		       printf(" O n�mero : %i \n",cont);
		       cont+=1;
	       }
	}
	else
	{
		cont=n2;
		   while(cont<=n1)
	       {
		       printf(" O n�mero : %i \n",cont);
		       cont+=1;
	       }
	}
	
	getch();
}
