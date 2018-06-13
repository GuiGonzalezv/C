#include <stdio.h>


main(){
	
	int numAnterior, num, i, fibo, result;
	
	printf("Digite um numero: ");
	scanf("%d", &fibo);
	num = 0;
	numAnterior = 1;
	
	printf("Resultado: ");
	while(result <= fibo){
	
		result = ( num + numAnterior );
		printf("%d,", result);
		num = numAnterior;
		numAnterior = result;
		
		
		
	}
}
