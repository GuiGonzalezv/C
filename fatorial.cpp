#include <stdio.h>
#include <stdlib.h>
#define fatorial 5

main(){

	int resultado, i;
	
	resultado = fatorial;
	
	for(i=fatorial; i>0; i--){
		if(i != 1){
			resultado = resultado * (i - 1);	
		}
		
	}

	printf("Fatorial: %d \n", resultado);


}


