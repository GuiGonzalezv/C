#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 3

main(){
	char frase[] = "Programa";
	char vogais[] = "aeiouAEIOU";
	int tamanho, vogal;
	
	vogal = 0;
	
	printf("Frase: %s \n", frase);
	
	tamanho = strlen(frase);
	
	printf("Tamanho da Frase: %d \n", tamanho);
	for(int j=0; j<tamanho; j++){
		
		
		for(int i = 0; i < strlen(vogais); i++){
			
			if(frase[j] == vogais[i]){
				vogal = vogal +1 ;
			}
			
		}	
	}
	printf("vogais = %d", vogal);

}
