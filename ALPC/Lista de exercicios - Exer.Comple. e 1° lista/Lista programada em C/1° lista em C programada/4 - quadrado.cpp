#include<conio.h>
#include<stdio.h>

main()

{

int a,b,qa,qb,sm;

  printf("Digite um n?mero: \n");
  scanf("%i",&a);
  printf("Digite outro n?mero: \n");
  scanf("%i",&b);
 
  qa=a*a;
  qb=b*b;
  sm= qa+qb;
  
  printf("O resultado ser? : %i",sm);
  getch();
}
