#include<conio.h>
#include<stdio.h>

main()
{

    char op�;
	float v1=0;
	
	printf("Digita a op��o da moeda (E/L/D/I) : \n");
	scanf("%c",&op�);
	
	printf("Digita o valor R$: \n");
	scanf("%f",&v1);
	
    
	if(op�=='E' || op�=='e')
	{
        v1= v1/2.617;
		printf("O valor em Euro � : R$ %f",v1);
	}
	    else if (op�=='L' || op�=='l')
	    {
        v1= v1/3.816;
		printf("O valor em Libra � : R$ %f",v1);
	    }
       else if (op�=='D' || op�=='d')
	    {
        v1= v1/2.071;
		printf("O valor em Dolar � : R$ %f",v1);
	     }
       else if (op�=='I' || op�=='i')
	   {
        v1= v1/0.018;
		printf("O valor em Iene � : R$ %f",v1);
	   }
	else
	{
		printf("Op��o Incorreta ! ");
	}
	
    getch();
}
