#include<conio.h>
#include<stdio.h>

main()

{

  float vs,vf,r;

  printf("Digite o valor do salário mínimo: \n");
  scanf("%f",&vs);
  printf("Digite o salário do funcionario: \n");
  scanf("%f",&vf);
  r=vf/vs;
  printf("A quantidade é : %f",r);
  getch();
}
