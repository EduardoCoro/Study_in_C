#include<conio.h>
#include<stdio.h>

main()
{
	float a=0,b=0;
	
	
	
	printf("Digita o 1º número : \n");
	scanf("%f",&a);
	printf("Digita o 2º número : \n");
	scanf("%f",&b);
	
         
	if(a==b)
	{
	  printf("Digita outros números que sejam diferentes");
	}
        else if (a>b)	
        {
          printf("O maior número é %f e o menor número é %f ",a,b);
        }
        else
        {
	   printf("O maior número é %f e o menor número é %f ",b,a);
        }
	
getch();
}
