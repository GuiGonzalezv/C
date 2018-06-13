#include <stdio.h>
#include <stdlib.h>

main(){
	
	float matriz[3][4];
	
	for(int i = 0; i < 3; i++){
		
		printf("=======================\n");
		printf("Aluno %d \n", i+1);
		printf("=======================\n");
		
		for(int j = 0; j<4; j++){
			printf("Insira a nota %d \n", j+1);
			scanf("%f", &matriz[i][j]);
		}
		
	}
	
	
		for(int k = 0; k < 3; k++){
			printf("=======================\n");
			printf("Aluno %d \n", k+1);
			printf("=======================\n");
			
			for(int h = 0; h<4; h++){
				
				printf("Nota %d: %.2f \n", h+1, matriz[k][h]);
			}
		}
}

