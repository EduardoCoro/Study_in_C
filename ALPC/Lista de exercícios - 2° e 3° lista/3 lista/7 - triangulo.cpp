#include<conio.h>
#include<stdio.h>

main()
{
	float a=0,b=0,c=0,v1=0,v2=0,v3=0;
	
	
	
	printf("Digita o 1� n�mero : \n");
	scanf("%f",&a);
	printf("Digita o 2� n�mero : \n");
	scanf("%f",&b);
	printf("Digita o 3� n�mero : \n");
	scanf("%f",&c);

     v1=b+c;
     v2=a+c;
     v3=a+b;
         
	if(a<v1 || b<v2 || c<v3)
	{


         if(a==b && a==c && b==c)
         {
           printf("Tri�ngulo Equil�tero");
         }
         else if(a==b && a!=c && b!=c)
         {
           printf("Tri�ngulo Is�sceles");
         }
           else if(a!=b && a!=c && b!=c)
         {
           printf("Tri�ngulo Escaleno");
         }

	}
        else
        {
	      printf("N�o � um tri�ngulo!");
       }

   getch();
}
