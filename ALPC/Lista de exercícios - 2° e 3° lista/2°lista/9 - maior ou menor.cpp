#include<conio.h>
#include<stdio.h>

main()
{
	float a=0,b=0;
	
	
	
	printf("Digita o 1� n�mero : \n");
	scanf("%f",&a);
	printf("Digita o 2� n�mero : \n");
	scanf("%f",&b);
	
         
	if(a==b)
	{
	  printf("Digita outros n�meros que sejam diferentes");
	}
        else if (a>b)	
        {
          printf("O maior n�mero � %f e o menor n�mero � %f ",a,b);
        }
        else
        {
	   printf("O maior n�mero � %f e o menor n�mero � %f ",b,a);
        }
	
getch();
}
