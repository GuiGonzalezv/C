#include <stdlib.h>
#include <stdio.h>

int somadeinteiros(int n){
	
	int i,s;
	s = 0;
	
	for(i=1; i<=n; i++){
		s = s + i;
	}
	
	return s;
}

main(){
	int numero1, resultado;
	
	printf("Digite um numero: ");
	scanf("%d", &numero1);
	
	resultado = somadeinteiros(numero1);
	
	printf("Soma ==> %d", resultado);
	
}
