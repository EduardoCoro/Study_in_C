#include<conio.h>
#include<stdio.h>

main()
{
	
	float sa=0,aument=0;
	
	
	
	printf("Digita o sal�rio : \n");
	scanf("%f",&sa);
	
	
	if(sa>2500)
	{
		aument=sa + (sa * (10/100) );
		printf("O novo sal�rio � de %f",aument);
	}
	else
	{   
    aument=sa+(sa*(25/100));
	
	printf("O novo sal�rio  de %f",aument); 
    }
	
	getch();
}
