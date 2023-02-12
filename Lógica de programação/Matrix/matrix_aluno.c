#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,al=0, md=0;
    int qdt_aluno=100, qdt_nt=12;
    float notas[qdt_aluno][qdt_nt];


    for(al=0; al<3 ; al++)
    {
             for(i=0; i <12 ; i+=2;)
             {
                 md= (notas[al][i] + notas[al][i+1]) / 2;
                 printf("%d",md);
             }
    }


    return 0;
}
