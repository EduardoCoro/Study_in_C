#include<conio.h>
#include<stdio.h>
#include<math.h>

main()

{

int num_pot,num,result;

  printf("Digite um n�mero: \n");
  scanf("%i",&num);
  printf("Digite a potencia do n�mero: \n");
  scanf("%i",&num_pot);
  result= pow(num,num_pot);

  printf("O n�mero : %i elevado a %i o valor e %i",num,num_pot,result);
  

  getch();
}
