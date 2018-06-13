#include <stdio.h>
#include <stdlib.h>

//funçoes
float sub(float Num1, float Num2){
	float result;
	result = Num1 - Num2;
	return result;
}

float multiplica(float Num1, float Num2, float Num3){
	float result;
	result = Num1 * Num2 * Num3;
	return result;
}

float divide(float Num1, float Num2){
	float result;
	result = Num1 / Num2 ;
	return result;
}

void imprime_cabec(void)
{
  printf("******************************\n");
  printf("*      GUILHERME GONZALEZ    *\n");
  printf("******************************\n\n");
  
  printf("******************************\n");
  printf("*    IFSP JACAREI 07/03/18   *\n");
  printf("******************************\n\n");
 
  return;
}

float perguntaNum(float variavel){
	
	printf("Digite um numero: ");
	scanf("%f", &variavel);
	fflush(stdin);
	return variavel;
}

void menu(void){
	imprime_cabec();
	printf("Escolha um item no menu: \n \n[1] Subtracao \n [2]Multiplicacao \n [3]Divisao \n [4]Media \n \n");
	return;
}

main(){
	
	//variaveis
	float num1, num2, num3, resultado, media ,nota1, nota2;
	int index;
	
	
	//chama o menu
	menu();
	//recebe qual item do menu ira executar
	scanf("%d", &index);
	
	if(index == 1){
		num1 = perguntaNum(num1);
		num2 = perguntaNum(num2);
		resultado = sub(num1, num2);
		printf("A subtracao entre %.2f e %.2f eh equivalente a: %.2f", num1, num2, resultado);
	}
	else if(index == 2){
		num1 = perguntaNum(num1);
		num2 = perguntaNum(num2);
		num3 = perguntaNum(num3);
		resultado = multiplica(num1, num2, num3);
		printf("A multiplicacao entre %.2f , %.2f e %.2f eh equivalente a: %.2f", num1, num2, num3, resultado);
	}
	else if(index == 3){
		num1 = perguntaNum(num1);
		num2 = perguntaNum(num2);
		resultado = divide(num1, num2);
		if(num2 == 0){
			printf("Segundo numero nao pode ser 0");
			system("cls");
			menu();
			scanf("%d", &index);
		}
		else{
			printf("A divisao entre %.2f e %.2f  eh equivalente a: %.2f", num1, num2, resultado);
		}
	
	}
	else if(index == 4){
		num1 = perguntaNum(num1);
		num2 = perguntaNum(num2);
		nota1 = num1 * 2;
		nota2 = num2 * 3;
		media = (nota1 + nota2) / 2;
		printf("A media considerando os pesos eh de: %.2f", media);
	}
	else{
		system("cls");
		printf("Esse item nao exite no menu \n");
		menu();
		scanf("%d", &index);
		if(index){
			index = NULL;	
		}
					
		
		
	}
	
	
	

	
}
