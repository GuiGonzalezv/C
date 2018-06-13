#include <stdio.h>
#include <stdlib.h>
#include <string.h>


main(){
	
	char frase[50], teclado[50] = "teclado";
	
	puts("Indique a frase: ");
	gets(frase);
	int flag = 1;

	for(int i = 0; i<strlen(frase); i++){
		if(frase[i] == ' ' || frase[i] == '\0'){
			int espaco = i - espaco;
			for(int j = 0; j<i; j++){
				if(frase[(i+j) - espaco + 1 ] == ' ' || teclado[j] == '\0'){
//					strcat(frase[(i+j) - espaco], "ou mouse");
					break;
				}else{
					if(frase[(i+j) - espaco +1 ] == teclado[j]){
						flag = 1;
					}
					else{
						flag = 0;
						break;
					}	
				}
				
			}
		}
//		if(flag == 1){
//			printf("deu bom !!!!!");
//		}
	}
	printf("%d", frase);



}
