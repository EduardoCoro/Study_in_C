#include<conio.h>
#include<stdio.h>

main()

{

float pr_cb,km_lt,dt,ql,valor;

  printf("Digite o preço por litro do combustível: \n");
  scanf("%f",&pr_cb);
  printf("Digita a quantidade de KM por litro : \n");
  scanf("%f",&km_lt);
  printf("Digita a distancia em KM : \n");
  scanf("%f",&dt);
  ql=dt/km_lt;
  valor=ql*pr_cb;
  printf("gastara em litros : %f",ql);
  printf(" Custo que sera gasto : %f",valor);
  getch();
}
