#include <stdlib.h>
#include <stdio.h>

int somadeinteiros(int numero1, int numero2){
	
	int i,s;
	s = 0;
	
	for(i=numero1+1; i<=numero2-1; i++){
		s = s + i;
	}
	
	return s;
}

main(){
	int numero1, numero2, resultado;
	
	printf("Digite um numero: ");
	scanf("%d", &numero1);
	
	printf("Digite outro numero: ");
	scanf("%d", &numero2);
	
	resultado = somadeinteiros(numero1, numero2);
	
	printf("Soma ==> %d", resultado);
	
}
