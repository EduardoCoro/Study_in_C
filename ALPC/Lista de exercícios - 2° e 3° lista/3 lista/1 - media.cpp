#include<conio.h>
#include<stdio.h>

main()
{
	float n1=0,n2=0,media=0;
	
	
	
	printf("Digita a 1� nota : \n");
	scanf("%f",&n1);
	printf("Digita a 2� nota : \n");
	scanf("%f",&n2);
	
    media=(n1+n2)/2;
    
	if(media <= 5)
	{
	  printf("A sua m�dia � %f e foi 'Reprovado'",media);
	}
    
	else if (media>=6 && media<=6.9 )	
        {
	       printf("A sua m�dia � %f e esta em 'Resupera��o'",media);
        }
        
	else
        {
	   printf("A sua m�dia � %f e esta APROVADO ",media);
        }
	
getch();
}
