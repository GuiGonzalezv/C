#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

main(){
	srand(time(NULL));
	int number = rand() % 1000, resposta, cont;
	printf("number %d \n", number);
	
	printf("Digite um numero entre um e mil: ");
	scanf("%d", &resposta);
	cont = cont+1;
	fflush(stdin);
			
	while(resposta != number){
		
		
		if(resposta > number){
			printf("O numero eh menor tente outra vez! \n");
			printf("Digite um numero: ");
			scanf("%d", &resposta);
			fflush(stdin);
			cont = cont + 1;

		}
		if( resposta < number){
			printf("O numero eh maior tente outra vez! \n");
			printf("Digite um numero: ");
			scanf("%d", &resposta);
			fflush(stdin);
			cont = cont + 1;

			
		}
		
	}
	
	if(resposta == number){
		printf("=================================\n");
		printf("Parabens voce acertou em %d tentativas! \n", cont);
		printf("=================================\n");
		sleep(5);
		
	}
}
