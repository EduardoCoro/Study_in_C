#include<conio.h>
#include<stdio.h>

main()
{
	int n1=0,n2=0,cont;
	
	printf("Digite o 1° número \n");
	scanf("%i",& n1);
	printf("Digite o 2° número \n");
	scanf("%i",& n2);
	
	if(n1<n2)
	{
	
	     for(cont=n1;cont<=n2;cont++)
	       {
		       printf(" O número : %i \n",cont);
	       }
	}
	else
	{
		   for(cont=n2;cont<=n1;cont++)
	       {
		       printf(" O número : %i \n",cont);
	       }
	}
	
	getch();
}
