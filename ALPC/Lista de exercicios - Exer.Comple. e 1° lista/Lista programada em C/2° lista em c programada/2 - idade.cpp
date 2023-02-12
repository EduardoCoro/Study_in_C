#include<conio.h>
#include<stdio.h>

main()

{

int an,ms,dias,rm,ra,rf;

  printf("Digite quantos anos você tem : \n");
  scanf("%i",&an);
  printf("Digite os messes: \n");
  scanf("%i",&ms);
  printf("Digite os dias : \n");
  scanf("%i",&dias);
  
  ra=an*365;
  rm=ms*30;
  rf=ra + rm + dias;  

  printf("Voce tem em dias : %i",rf);
  getch();
}
