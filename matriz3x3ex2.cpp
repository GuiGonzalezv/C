#include <stdio.h>
#include <stdlib.h>

main(){
	
	float matriz[3][3], soma;
	soma = 0;
	for(int i = 0; i < 3; i++){
		
		for(int j = 0; j<3; j++){
			printf("Insira a matriz[%d][%d]: ", i, j);
			scanf("%f", &matriz[i][j]);
			
			
			if((i!=j) && (i<= 2) && (j<=1) && (i != 0)){
				soma = soma + matriz[i][j];
			}
			
		}
	}
	
	
	for(int k = 0; k < 3; k++){
		
		for(int h = 0; h<3; h++){
			
			printf("Matriz[%d][%d]: %.2f \n", k, h, matriz[k][h]);
		}
		
		
	}
	printf("Soma: %.2f", soma);
	
}
//
//00	01	02
//10	11	12
//20	21	22


//1	2	3
//4	5	6
//7	8	9
