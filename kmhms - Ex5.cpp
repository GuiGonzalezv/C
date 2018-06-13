#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void menu(){
	printf("\tEscolha uma opcao do menu: \n");
	printf("\t[1] Converter km/h para m/s \n \t[2]Converter m/s para km/h\n \t[3]Sair \n");	
}


main(){
	int index;
	float  kmh, ms, result, result2;
	
	do{
		menu();
		scanf("%d", &index);
		fflush(stdin);
		
			switch(index){
				case 1:
					printf("Digite a velocidade em km/h: ");
					scanf("%f", &kmh);
					fflush(stdin);
					result = (kmh / 3.6);
					printf(" ==================RESULTADO============== \n");
					printf("A quantia em metros por segundo eh de: %2.f m/s \n", result);
					printf("========================================== \n");
					break;
					
					
				case 2:
					printf("Digite a velocidade em m/s: ");
					scanf("%f", &ms);
					result2 = (ms * 3.6);
					printf(" ==================RESULTADO============== \n");
					printf("A quantia em metros por segundo eh de: %2.f km/h \n", result2);
					printf("========================================== \n");
					break;
					
				default:
					break;			
			}
			
	}while(index != 3);
}
