#include<conio.h>
#include<stdio.h>

main()
{
	
	float sa=0,aument=0;
	
	
	
	printf("Digita o salário : \n");
	scanf("%f",&sa);
	
	
	if(sa>2500)
	{
		aument=sa + (sa * (10/100) );
		printf("O novo salário é de %f",aument);
	}
	else
	{   
    aument=sa+(sa*(25/100));
	
	printf("O novo salário  de %f",aument); 
    }
	
	getch();
}
