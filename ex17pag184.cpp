#include <stdio.h>
#include <stdlib.h>
#define n 3

main(){
	
	int vetor1[n], vetor2[n], vetor3[n+n], aux;
//	numvetor = n+n;
	
	printf(" ========================== Vetor 1 ============================== \n");
	for(int i = 0; i < n; i++){
		printf("Posicao %d :", i+1);
		scanf("%d", &vetor1[i]);
	}
	printf("============================================================\n \n \n");

	printf(" ========================== Vetor 1 ============================== \n");
	for(int j = 0; j < n; j++){
		printf("Posicao %d :", j+1);
		scanf("%d", &vetor2[j]);
	}
	printf("============================================================\n \n \n");
	
	for(int k = 0; k<6; k++){
		vetor3[k] = vetor1[k];
		
		if( k > 2){
			vetor3[k] = vetor2[k - 3];
		}
	}
	
	for(int m = 0; m<=5; m++){
		if(vetor3[m] < vetor3[m+1]){
			aux = vetor3[m];
			vetor3[m] = vetor3[m+1];
			vetor3[m+1] = aux;
		}
		printf("\nval[%d]: %d\n", m+1, vetor3[m]);

	}
	
	
//	
//for (i=0; i<=4; i++) {
//    if(val[i] < val[i+1]) {
//        aux = val[i];
//        val[i] = val[i+1];
//        val[i+1] = aux ;
//    }
//    printf("\nval[%d]: %d\n", i+1, val[i]);
//}
	


	
}
