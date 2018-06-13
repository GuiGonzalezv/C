#include <stdio.h>
#include <stdlib.h> 

main(){
	int numeros[10], x;
	
	for(int i = 0; i<10; i++){
		printf("Digite um numero: ");
		scanf("%d", &numeros[i]);
	}
	
	printf("Insira um numero X: ");
	scanf("%d", &x);
	
	for(int j = 0; j<10; j++){
		
		if(x % numeros[j]  == 0){
			printf("Multiplo: %d \n", numeros[j]);
		}
		
	}	
	
}
