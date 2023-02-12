#include <stdio.h>

int main(){

 int  Sl=0, l=0 , c=0, Sv=0, m[4][4], Num=0, aux=3, Sd=0 , help=0;
 
 for(l=0; l<4; l++){
	for(c=0; c<4; c++){
	    printf("\n Digite o numero : \n");
		scanf("%d", & Num);
		
		m[l][c]=Num;
		Sl+=Num;
		
		if(l == c){
			Sv+=Num;
		}
		if(c == aux){
			Sd+=Num;
		}
	}
	 
	if(Sl != 34 || l == 3 && Sv != 34 ||  l == 3 && Sd !=34){
        l=4;
        printf("\n  Errou ! \n");
    }
    else if( Sl ==34 && Sv==34 && Sd==34 && l==3){
        printf("Cubo magico Completo ! \n Parabens! \n ");
    }
		
    Sl=0;
    aux--;	    	 
 }
 
 return 0;
}