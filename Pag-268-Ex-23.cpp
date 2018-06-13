#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int triangulo(int lado1, int lado2, int lado3 ){
	
	if(lado1 <= (lado2 + lado3)){
		if(lado2<= (lado1 + lado3)){
			if(lado3 <= (lado1+ lado2)){
				return 1;
			}else{
				return 0;
			}
		}else{
			return 0;
		}
	}
	else{
		return 0;
	}
	
}

int tipoTriangulo( int lado1, int lado2, int lado3){
	if(lado1 == lado2 && lado2 == lado3){
		//Equilatero
		return 1;
	}
	if((lado1 == lado2 && lado2 != lado3) || (lado2 == lado3 && lado3 != lado1) || (lado3 == lado1 && lado1 != lado2) ){
		//Isoceles
		return 2;
	}
	if(lado1 != lado2 && lado2 != lado3){
		//Escaleno
		return 3;
	}
}


main(){

	int resultado, result2, lado1, lado2, lado3;
	
	puts("Indique o primeiro valor: ");
	scanf("%d", &lado1);
	fflush(stdin);
	
	if(lado1 < 0){
		puts("Indique um valor maior que 0: ");
		scanf("%d", &lado1);
		fflush(stdin);	
	}
	
	puts("Indique o segunda valor: ");
	scanf("%d", &lado2);
	
	if(lado2 < 0){
		puts("Indique um valor maior que 0: ");
		scanf("%d", &lado2);
		fflush(stdin);	
	}
	
	puts("Indique o terceiro valor: ");
	scanf("%d", &lado3);
	
	if(lado3 < 0){
		puts("Indique um valor maior que 0: ");
		scanf("%d", &lado3);
		fflush(stdin);	
	}
	
	resultado = triangulo(lado1, lado2, lado3);
	
	if(resultado == 1){
		printf("Eh um triangulo \n");
		
		result2 = tipoTriangulo(lado1, lado2, lado3);
		
		if(result2 == 1){
			printf("Equilatero");
		}
		if(result2 == 2){
			printf("Isoceles");
		}
		if(result2 == 3){
			printf("Escaleno");
		}
		
	}
	
	
	
}
