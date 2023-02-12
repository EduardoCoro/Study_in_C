#include<conio.h>
#include<stdio.h>

main()
{
	int voto=0, cont=1,dgv=0,cd1=0,cd2=0,cd3=0,cd4=0,cd5=0,cd6=0;
	
	printf(" 1,2,3,4 votos para os respectivos candidatos (Enter) \n");
	printf(" 5 voto nulo e 6 voto em branco (Enter) \n");    
		while(cont<=10)
		{
			printf("Digite o código do %i voto : \n",cont);
			scanf("%i",& voto);
			
			if(voto==1)
			 {
				cd1+=1;
			 }
			 else if(voto==2)
			 {
				cd2+=1;
			 }
			 else if(voto==3)
			 {
				cd3+=1;
			 }
			 else if(voto==4)
			 {
				cd4+=1;
			 }
			 else if(voto==5)
			 {
				cd5+=1;
			 }
			 else if (voto==6)
			 {
				cd6+=1;
			 }
			else
			 {
				printf("Código errado!");
			 }
			 voto=0;
			 cont++;
	    }
	    
	    dgv=(cd1 + cd2 + cd3 + cd4 + cd5 + cd6)*10;
	    
	    printf("O candidato 1 = %i votos \n",cd1);
	    printf("O candidato 2 = %i votos \n",cd2);
	    printf("O candidato 3 = %i votos \n",cd3);
	    printf("O candidato 4 = %i votos \n",cd4);
	    printf("Total de voto nulo = %i votos \n",cd5);
	    printf("Total de branco  = %i votos \n",cd6);
	    printf("A porcentagem de nulo = %i  \n",(cd5*dgv)/10);
	    printf("A porcentagem de branco = %i  \n",(cd6*dgv)/10);
	getch();
}
