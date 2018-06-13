#include <stdio.h>
#include <stdlib.h>

main(){
	
	int matriz[3][3], coluna1[3], coluna2[3], coluna3[3];
	
	for(int i = 0; i < 3; i++){
		
		for(int j = 0; j<3; j++){
			printf("Insira a matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
		
	}
	
	
	for(int k = 0; k < 3; k++){
		
		printf("\n");
		
		for(int h = 0; h<3; h++){
			
			if(k == 0){
				coluna1[h] = matriz[k][h];
			}
			
			if(k == 1){
				coluna2[h] = matriz[k][h];
			}
			
			if(k == 2){
				coluna3[h] = matriz[k][h];
			}
			
			printf("\t %d ", matriz[k][h]);
			
		}
	}
	printf("\n");
	printf("======================\n");
	printf("TRANSPOSTA \n");
	printf("======================\n");
	
	for(int m = 0; m < 3; m++){
	
		printf("\n");
		printf("\t %d ", coluna1[m]);
		printf("\t %d ", coluna2[m]);
		printf("\t %d \n", coluna3[m]);
		
	}
	
}

//1	2	3
//4	5	6
//7	8	9
//
//1	4	7
//2	5	8
//3	6	9
