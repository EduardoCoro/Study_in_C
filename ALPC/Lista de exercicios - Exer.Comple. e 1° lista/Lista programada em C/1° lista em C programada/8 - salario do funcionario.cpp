#include<conio.h>
#include<stdio.h>

main()

{

float vs,vd,r;

  printf("Digite o valor do sal�rio: \n");
  scanf("%f",&vs);
  printf("Digita o percentual de desconto: \n");
  scanf("%f",&vd);
  r=vs+(vs*(vd/100));
  printf("O valor do novo salario : %f",r);
  getch();
}
