#include<conio.h>
#include<stdio.h>

main()
{
	float a=0,b=0,c=0;
	
	
	
	printf("Digita o n�mero : \n");
	scanf("%f",&a);
	printf("Digita 2� n�mero : \n");
	scanf("%f",&b);
	printf("Digita o 3� n�mero : \n");
	scanf("%f",&c);
         
	if(a==b && a>c)
	{
      printf("O Maior n�mero � : %f",a);
	}
        else if (a==c && a>b)
        {
           printf("O Maior n�mero � : %f",b);
	    }
        else if (b==c && b>a)
        {
           printf("O Maior n�mero � : %f",a);
	    }
        else if (a>b && a>c)	
        {
          printf("O maior n�mero � %f ",a);
        }
        else if (b>a && b>c)	
        {
          printf("O maior n�mero � %f ",b);
        }
        else if (c>a && c>b)	
        {
          printf("O maior n�mero � %f ",c);
        }


        else
        {
	      printf("Digita outros n�meros que sejam diferentes");
        }
	
getch();
}
