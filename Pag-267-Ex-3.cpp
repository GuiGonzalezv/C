#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char compFrase(char frase1[40], char frase2[40] ){
	
	
	
	if(strcmp(frase1, frase2) == 0){
		return 0;
	}else{
		for(int i=0; i<40; i++){
			if(frase1[i] != frase2[i]){
				return i;
				break;
			}
		}
	}
	
}

main(){
	char frase1[40], frase2[40];
	int resultado;
	
	puts("Indique a primeira frase: ");
	gets(frase1);
	
	puts("Indique a segunda frase: ");
	gets(frase2);
	
	resultado = compFrase(frase1, frase2);
	
	if(resultado != 0){
		printf("Nao sao iguais na posicao %d", resultado);
		
	}else{
		printf("Iguais");
	}
	
}
