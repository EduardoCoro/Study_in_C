#include<conio.h>
#include<stdio.h>

void cargo (int n1)
{
	if (n1==1)
	{
		printf("\n O Cargo = Secretária(o) ");
	}
	else if (n1==2)
	{
		printf("\n O Cargo = Gerente ");
	}
	else if (n1==3)
	{
		printf("\n O Cargo = Operario(a) ");
	}
	else
	{
		printf("\n Outros cargos (...) ");
	}
}

main()
{
	int num;
	
	 printf("Digite o codigo do cargo : \n");
	 scanf("%i",& num);
	 cargo(num);
	 getch();
}
