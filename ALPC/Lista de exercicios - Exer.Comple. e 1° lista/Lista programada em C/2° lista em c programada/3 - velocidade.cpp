#include<conio.h>
#include<stdio.h>

main()

{

float vi,a,t,vr;

  printf("Digite a velocidade inicial: \n");
  scanf("%f",&vi);
  printf("Digite acelera��o : \n");
  scanf("%f",&a);
  printf("Informe o tempo : \n");
  scanf("%f",&t);
  vr=vi+(a*t);
  printf("O valor � : %f",vr);
  getch();
}
