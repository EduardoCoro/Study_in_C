#include<conio.h>
#include<stdio.h>

main()

{

float s,aulas,vhora;

  printf("Digite o n?mero de aulas dadas: \n");
  scanf("%f",&aulas);
  printf("Digite o valor da hora aula : \n");
  scanf("%f",&vhora);
  
  s=aulas*vhora;
  
  printf("O resultado ser? : %f",s);
  getch();
}
