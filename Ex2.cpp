#include <stdio.h>
#include <stdlib.h> 

main(){
	int numeros[10], maiorNum, menorNum;
	
	for(int i = 0; i<10; i++){
		printf("Digite um numero: ");
		scanf("%d", &numeros[i]);
	}
	menorNum = numeros[0];
	for(int j = 0; j<10; j++){
		
		if(numeros[j] > maiorNum){
			maiorNum = numeros[j];
		}
		if( numeros[j] < menorNum){
			menorNum = numeros[j];
		}
		
	}	
	printf("Maior Numero: %d \n", maiorNum);
	printf("Menor Numero: %d", menorNum);	
}
