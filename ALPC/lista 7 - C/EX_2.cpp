#include<conio.h>
#include<stdio.h>

int sm (int n1,int n2)
{
		
	n1=n1 +n2;
	return n1;
}

main()
{
	int num1,num2;
	
	 printf("Digite um numero : \n");
	 scanf("%i",& num1);
	 printf("Digite outro numero : \n");
	 scanf("%i",& num2);
	 printf("A soma e : %i",sm (num1,num2));
	 getch();
}
