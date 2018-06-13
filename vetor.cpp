#include <stdio.h>
#include <stdlib.h>
#define n 4

main(){
	float aluno[n];
	
	for(int i=0; i< n; i++){
		printf("Digite a nota do aluno %d:", i);
		scanf("%f", &aluno[i]);
	}
	for(int j=0; j< n; j++){
		printf("Aluno %d: %.2f \n", j,aluno[j]);
	}
}
