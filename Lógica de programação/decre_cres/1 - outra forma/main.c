#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opc=0, n1=0,n2=0,n3=0;

    printf("Digite o 1° numero : \n");
    scanf("%i", & n1);
    printf("Digite o 2° numero : \n");
    scanf("%i", & n2);
    printf("Digite o 3° numero : \n");
    scanf("%i", & n3);

    printf("Digite: 1- Decrescente e 2- Crescente :  \n");
    scanf("%i", & opc);


    if(n1==n2 && n2 ==n3)
    {
        printf("\n %i \n %i \n %i \n",n1,n2,n3);
    }
    else if(opc==1)
    {
          if(n1>n2)
          {
              if(n2>n3)
              {
                  printf("\n %i \n %i \n %i \n",n1,n2,n3);
              }
              else
              {
                  if(n1>n3)
                  {
                      printf("\n %i \n %i \n %i \n",n1,n3,n2);
                  }
                  else
                  {
                      printf("\n %i \n %i \n %i \n",n3,n1,n2);
                  }
              }
          }
          else
          {
              if(n2>n3)
              {
                  if(n1>n3)
                  {
                      printf("\n %i \n %i \n %i \n",n2,n1,n3);
                  }
                  else
                  {
                      printf("\n %i \n %i \n %i \n",n2,n3,n1);
                  }
              }
              else
              {
                  printf("\n %i \n %i \n %i \n",n3,n2,n1);
              }
          }
    }
    else
    {
          if(n1<n2)
          {
              if(n2<n3)
              {
                  printf("\n %i \n %i \n %i \n",n1,n2,n3);
              }
              else
              {
                  if(n1<n3)
                  {
                      printf("\n %i \n %i \n %i \n",n1,n3,n2);
                  }
                  else
                  {
                      printf("\n %i \n %i \n %i \n",n3,n1,n2);
                  }
              }
          }
          else
          {
              if(n2<n3)
              {
                  if(n1<n3)
                  {
                      printf("\n %i \n %i \n %i \n",n2,n1,n3);
                  }
                  else
                  {
                      printf("\n %i \n %i \n %i \n",n2,n3,n1);
                  }
              }
              else
              {
                  printf("\n %i \n %i \n %i \n",n3,n2,n1);
              }
          }
    }

    return 0;
}
