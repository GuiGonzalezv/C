#include <stdio.h>

main(){
	int n, result;
	
	printf("Digite o numero: ");
	scanf("%d", &n);
	
	result = n                            ;
	
	while(n >= 1){
		
		
		
		if(n > 1){
			printf("%d X %d = %d \n",result, n-1, result *(n-1));
			result = result * (n - 1);	
		}
		
	
		n = n -1;	

	}
	printf("Resultado: %d \n", result);	
	
}
