#include<conio.h>
#include<stdio.h>
#include<math.h>

main()

{

int num_pot,num,result;

  printf("Digite um número: \n");
  scanf("%i",&num);
  printf("Digite a potencia do número: \n");
  scanf("%i",&num_pot);
  result= pow(num,num_pot);

  printf("O número : %i elevado a %i o valor e %i",num,num_pot,result);
  

  getch();
}
