#include<conio.h>
#include<stdio.h>

void trt (int num)
{
	float kb,mb,gb;
	
	kb=num*1024;
	mb=kb*1024;
	gb=mb*1024;
	
	printf("O byte %i transformado : \n",num);
	printf("Kilobytes = %f KB \n",kb);
	printf("Megabytes = %f MB \n",mb);
	printf("Gigabytes = %f GB \n",gb);
}

main()
{
	int bt;
	
	 printf("Digite quantidade de Bytes : \n");
	 scanf("%i",& bt);
	 trt(bt);
	 getch();
}
