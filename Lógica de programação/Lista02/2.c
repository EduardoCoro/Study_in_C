/*
#include <stdio.h>
#include <stdlib.h>

int main(){
 int num=0, dgt=0, invert=0, Niso=0;

 printf("\n Digite um numero de 5 digitos: ");
 scanf("%d", &num);

 dgt=num;
  do{

      Niso = dgt % 10;
      invert = (invert * 10) + Niso;
      dgt = dgt / 10;

    }while(dgt != 0);

    if(num == invert){
      printf("\n E UM PALINDROMO! \n");
    }
    else{
      printf("\n NAO E UM PALINDROMO! \n");
    }
    return 0;
}

*/
