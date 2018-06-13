#include <stdio.h>
#include <stdlib.h>

main(){
	int numero;
	
	printf("Insira um numero par:");
	scanf("%d", &numero);
	
	while(numero % 2 != 0){
		printf("Este numero nao eh par, insira um numero par:");
		scanf("%d", &numero);
	}
	
	for(int i = numero; i>0; i--){
		if(i % 2 == 0){
			printf("N: %d \n", i);
		}
	}
}
