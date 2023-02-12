#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aux=0, l=0, c=0,linha=0,coluna=0;

    printf("----- Inserindo na matriz -----\n");
    printf("----- valor de Matriz -> Vetor-\n");
    printf("----- Vetor invertido -> Matriz \n\n\n");

    printf("Digita a quantidade de linhas : \n");
    scanf("%d", & linha);
    printf("Digita a quantidade de coluna : \n");
    scanf("%d", & coluna);

    int vetor[linha*coluna], matrix[linha][coluna];

    for(l=0 ; l < linha ; l++)
    {
        for(c=0; c < coluna; c++)
        {
            printf("Digite o número ( Linha %d - Coluna %d  ) :  \n ",l,c);
            scanf("%d", & matrix[l][c]);
        }
    }
    printf("\n\n");
    // Mostrar a matrix!
    printf("\n Mostrar matrix \n");
    for(l=0; l< linha; l++)
    {
        for(c=0; c< coluna ; c++)
        {
            printf(" %d ",matrix[l][c]);
        }
        printf("\n");
    }

    //Passar para o vetor e mostrar.
    printf("\nPassar a matris para o vetor e mostrar \n\n");
     aux=0;
     for(l=0; l< linha; l++)
    {
        for(c=0; c< coluna ; c++)
        {
            vetor[aux]= matrix[l][c];
            printf(" %d ",vetor[aux]);
            aux++;
        }

    }
    printf("\n\n");

    // Passar do vetor para matrix invertida e mostrar os valores.
     printf("\n Passando do vetor para Matrix invertida \n\n");

     l=0,c=0;

     for(aux=(linha*coluna)-1; aux >= 0 ; aux--)
    {

            matrix[l][c]= vetor[aux];
            printf(" %d ",matrix[l][c]);

            if( c != coluna )
            {
                c++;

            }
            if(c == coluna)
            {
                c=0;
                l++;
                printf("\n");
            }
    }




    return 0;
}
