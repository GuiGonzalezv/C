#include <stdio.h>
#include <stdlib.h>

main(){
	int N[10], i, j, numeroprimo, flag;
	
	numeroprimo = 0;
	
	for(i=0; i<10; i++){
		
		printf("Digite um numero: ");
		scanf("%d", &N[i]);
	}
	
	flag = 0;
	
	for(int k=0; k<10; k++){
	
		for(j = N[k]; j>0; j++){
			
		
			if(j != 1 ){
					
				if (N[k] % j != 0){
						
				}else{
					flag = flag + 1;
				}
							
			}
		}
	
		if(flag < 1){
			printf("Posicao %d numero %d eh primo! \n", k, N[k]);
			flag = 0;
		}
		
		else{
			printf("Posicao %d numero %d nao eh primo! \n", k, N[k]);
			flag = 0;
		}
		
		
		
	}
	
}
