#include <stdlib.h>
#include <stdio.h>

int somadeinteiros(int a, int b, int c){
	
	int i,s;
	s = 0;
	
	if(a >= 1){
		for(i=b; i<=c; i++){
		
			if(i % a == 0){
				s = s + i;	
			}
		
		}
		return s;	
	}else{
		return 0;
	}
	
	
	
}


main(){
	
	int a, b, c, resultado;
	
	printf("Digite um numero para A: ");
	scanf("%d", &a);
	
	printf("Digite um numero para B: ");
	scanf("%d", &b);
	
	printf("Digite um numero para C: ");
	scanf("%d", &c);
	
	resultado = somadeinteiros(a, b, c);
	
	if(resultado == 0){
		printf("A deve ser maior que 1!");
	}else{
		printf("Soma ==> %d", resultado);	
	}
	
}
