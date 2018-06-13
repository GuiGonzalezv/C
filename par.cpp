#include <stdio.h>
#include <stdlib.h>

main(){
	
	int N, i;
	
	printf("digite um numero: ");
	scanf("%d", &N);
	
	for(i=0; i<=N; i++){
		if((i % 2 == 0) && (i != 0)){
			printf("PAR %d \n", i);
		}
	}
}

