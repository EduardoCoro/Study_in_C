#include<conio.h>
#include<stdio.h>

void txt (int n1)
{
	if (n1>=100)
	{
		printf("\n O número é maior ou igual a 100 ");
	}
	else
	{
		printf("\n O número é menor que 100 ");
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
