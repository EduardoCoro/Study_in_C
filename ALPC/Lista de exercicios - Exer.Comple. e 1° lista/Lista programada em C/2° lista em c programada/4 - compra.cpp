#include<conio.h>
#include<stdio.h>

main()

{

float vc,taxa,q_atr,vr;

  printf("Digite o valor da compra : \n");
  scanf("%f",&vc);
  printf("Digite a taxa de juros : \n");
  scanf("%f",&taxa);
  printf("Digita os dias de atraso : \n");
  scanf("%f",&q_atr);

  vr=vc+(vc*(taxa/100)*q_atr);

  printf("O valor � : %f",vr);
  getch();
}
