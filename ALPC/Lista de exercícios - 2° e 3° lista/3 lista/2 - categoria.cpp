#include<conio.h>
#include<stdio.h>

main()
{
	int n1=0;
	
	
	
	printf("Digita a sua idade : \n");
	scanf("%i",&n1);
    
	if(n1>= 5 && n1<=7)
	{
	  printf("Categoria Infantil A");
	}
    
	else if (n1>=8 && n1<=11 )	
        {
	       printf("Categoria Infantil B");
        }
    else if (n1>=12 && n1<=13 )	
        {
	       printf("Categoria Juvenil A");
        }    
    else if (n1>=14 && n1<=17 )	
        {
	       printf("Categoria Juvenil B");
        }
	else if (n1>=18)	
        {
	       printf("Categoria Adulto");
        }
	else
        {
	   printf("Idade n�o aceita");
        }
	
getch();
}
