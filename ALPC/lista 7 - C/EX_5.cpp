#include<conio.h>
#include<stdio.h>

int sm (int n1,int n2,int n3)
{
	n1=n1*365;
	n2=n2*30;
	n3=n3+n2+n1;
	
	return n3;
}

main()
{
	int an,ms,ds;
	
	 printf("Digite a idade em anos : \n");
	 scanf("%i",& an);
	 printf("Digite os messes : \n");
	 scanf("%i",& ms);
	 printf("Digite os dias : \n");
	 scanf("%i",& ds);
	 printf("A quantidade de dias e  : %i \n",sm (an,ms,ds));
	 getch();
}
