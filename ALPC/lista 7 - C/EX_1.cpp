#include<conio.h>
#include<stdio.h>

void txt (int n1)
{
	if (n1>=100)
	{
		printf("\n O n�mero � maior ou igual a 100 ");
	}
	else
	{
		printf("\n O n�mero � menor que 100 ");
	}
}

main()
{
	int num;
	
	 printf("Digite um numero : \n");
	 scanf("%i",& num);
	 txt(num);
	 getch();
}
