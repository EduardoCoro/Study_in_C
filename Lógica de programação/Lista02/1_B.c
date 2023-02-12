/*
#include <stdio.h>

int calcula(int); // indica que existe função no final da pg

int main()
{
    int a=0,b=0,c=0; // Declaracao de var tipo inteiro
    char d;          // declarando do tipo char OU seja, texto

    a = 1 ; b = 2 ; c = 3 ; d='C'; // atribuição de valores as variaveis
    a+=b*c;                       // atribui o  valor mais o que ele tinha como (a=7)

    if(a>5)          // Se a for maior que 5 , entao executa o bloco
    {
        d--;         // atribui menos 1 ao que tinha, nesse caso vai diminuir a letra..
    }
    else{            // se o se for falso, executa esse bloco
        d++;        // atribui mais 1 ao que tinha, nesse caso vai aumentar a letra..
    }

    printf("%d - %d - %d - %c \n",a,b,c,d); // exibi os valores das variaveis
    d=(a>7)?d-1:d+5;
    b= calcula(b);                        // chama a função, inserindo a variavel 'b' no bloco 'int calcula'
    c= calcula(calcula(a));
    a=c++;                                // nesse caso so atribui o valor de c em a.

    printf("%d - %d - %d - %c \n",a,b,c,d); // exibi os valores das variaveis
    return 0;
}

int calcula(int x) // função calcula que possui um parâmetro inteiro
{

  int i; // declara uma variável chamada i
    if ((x=x*2)>5)// se x recebendo x vezes dois for maior que 5, então
    {
       return(x+3); // retorna x mais 3
    }
    for(i=0;i<10;i++)// para i igual a 0; i menor que 10; incrementa mais 1
    {
       if (i<5) continue; // i for menor que 5, então continua
       if (x>8) break; // se x for maior que 8, então quebra
       x+=2; // incrementa mais 2 para x
    }

    return x; //retorna x
}
*/
