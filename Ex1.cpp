#include <stdio.h>
#include <stdlib.h> 

main(){
	int numeros[6];
	
	for(int i = 0; i<6; i++){
		printf("Digite um numero: ");
		scanf("%d", &numeros[i]);
	}
	
	for(int j = 0; j<6; j++){
		printf("Numeros: %d \n", numeros[j]);
	}	
}
