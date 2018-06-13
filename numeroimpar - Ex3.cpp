#include <stdio.h>
#include <stdlib.h>

main(){
	
	int numero;
	
	printf("Informe a quantidade de numeros: ");
	scanf("%d", &numero);
	
	for(int i = 0 ; i<=numero; i++){
		if(i % 2 != 0){
			printf("N: %d \n", i);
		}
	}
}
