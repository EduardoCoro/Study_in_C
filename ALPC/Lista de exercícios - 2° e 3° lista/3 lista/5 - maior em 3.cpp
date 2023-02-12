#include<conio.h>
#include<stdio.h>

main()
{
	float a=0,b=0,c=0;
	
	
	
	printf("Digita o número : \n");
	scanf("%f",&a);
	printf("Digita 2º número : \n");
	scanf("%f",&b);
	printf("Digita o 3º número : \n");
	scanf("%f",&c);
         
	if(a==b && a>c)
	{
      printf("O Maior número é : %f",a);
	}
        else if (a==c && a>b)
        {
           printf("O Maior número é : %f",b);
	    }
        else if (b==c && b>a)
        {
           printf("O Maior número é : %f",a);
	    }
        else if (a>b && a>c)	
        {
          printf("O maior número é %f ",a);
        }
        else if (b>a && b>c)	
        {
          printf("O maior número é %f ",b);
        }
        else if (c>a && c>b)	
        {
          printf("O maior número é %f ",c);
        }


        else
        {
	      printf("Digita outros números que sejam diferentes");
        }
	
getch();
}
