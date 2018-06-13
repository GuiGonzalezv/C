#include <stdio.h>
#include <stdlib.h>

//Funcoes
//Neste caso foi declarado uma funcao
//de tipo float que ira receber dois numeros
//e ira fazer a subtracao de ambos, retornando
//o resultado
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

float porcent(float variavel){
	
	float result, resultado;
	result = ((variavel * 10) / 100);
	resultado = variavel - result;
	return resultado;
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
	printf("Escolha um item no menu: \n \n[1] Subtracao \n [2]Multiplicacao \n [3]Divisao \n [4]Media \n [5]Desconto Produto \n [6]Salario \n [7] Peso \n [8]Limpar tela \n [9]Sair \n \n");
	return;
}

main(){
	
	//variaveis
	float num1, num2, num3, resultado, media ,nota1, nota2, produtopreco, novopreco, salario, vendas, salariofinal, comissao, peso, emagreceu, engordou, pesomagro, pesogordo;
	int index = 1;
	
	do{
		//chama o menu
		menu();
		//recebe qual item do menu ira executar
		scanf("%d", &index);
		
		switch(index)
		{
			case 1:
				num1 = perguntaNum(num1);
				num2 = perguntaNum(num2);
				resultado = sub(num1, num2);
				printf("============================RESULTADO =================================================\n");
				printf("A subtracao entre %.2f e %.2f eh equivalente a: %.2f \n ", num1, num2, resultado);
				printf("======================================================================================= \n \n");
				break;
				menu();
				scanf("%d", &index);
				
			
			case 2:
				num1 = perguntaNum(num1);
				num2 = perguntaNum(num2);
				num3 = perguntaNum(num3);
				resultado = multiplica(num1, num2, num3);
				printf("============================RESULTADO =================================================\n");
				printf("A multiplicacao entre %.2f , %.2f e %.2f eh equivalente a: %.2f \n ", num1, num2, num3, resultado);
				printf("=======================================================================================\n \n");
				break;
				menu();
				scanf("%d", &index);
			
			case 3:
				num1 = perguntaNum(num1);
				num2 = perguntaNum(num2);
				resultado = divide(num1, num2);
				if(num2 == 0){
					printf("Segundo numero nao pode ser 0 \n \n");
					break;
					menu();
					scanf("%d", &index);
				}
				else{
					printf("============================RESULTADO =================================================\n");
					printf("A divisao entre %.2f e %.2f  eh equivalente a: %.2f \n", num1, num2, resultado);
					printf("=======================================================================================\n \n");
					break;
					menu();
					scanf("%d", &index);
				}
			case 4:
				num1 = perguntaNum(num1);
				num2 = perguntaNum(num2);
				nota1 = num1 * 2;
				nota2 = num2 * 3;
				media = (nota1 + nota2) / 2;
				printf("============================RESULTADO =================================================\n");
				printf("A media considerando os pesos eh de: %.2f\n ", media);
				printf("=======================================================================================\n \n");
				break;
				menu();
				scanf("%d", &index);
			
			case 5:
				produtopreco = perguntaNum(produtopreco);
				novopreco = porcent(produtopreco);
				printf("============================RESULTADO =================================================\n");
				printf("O Produto com o preco novo eh: %.2f \n", novopreco);
				printf("=======================================================================================\n \n");
				break;
				menu();
				scanf("%d", &index);
				
			case 6:
				printf("Digite o Salario fixo: ");
				scanf("%f", &salario);
				fflush(stdin);
				
				printf("Informe o valor das vendas: ");
				scanf("%f", &vendas);
				fflush(stdin);
				
				comissao = ((vendas * 4)/100);
				
				salariofinal = salario + comissao;
				
				printf("============================RESULTADO =================================================\n");
				printf("A comissao foi no valor de: %.2f e o salario final eh: %.2f \n", comissao, salariofinal);
				printf("=======================================================================================\n \n");
				break;
				menu();
				scanf("%d", &index);
				
				
			case 7:
				printf("Digite o seu Peso: ");
				scanf("%f", &peso);
				fflush(stdin);
				
				engordou = ((peso * 15)/100);
				pesogordo = peso + engordou;
				
				emagreceu = ((peso * 20) / 100);
				pesomagro = peso - emagreceu;
				
				
				printf("============================RESULTADO =================================================\n");
				printf("No caso de engordar novo peso eh: %.2f \n No caso de emagrecer novo peso eh: %.2f \n", pesogordo, pesomagro);
				printf("=======================================================================================\n \n");
				break;
				menu();
				scanf("%d", &index);
				
			case 8:
				system("cls");
				break;
				menu();
				scanf("%d", &index);
			
			case 9:
				
			
				system("cls");
				break;
				return 0;
				
				
			default:
				system("cls");
				printf("Esse item nao exite no menu \n");
				break;
				menu();
				scanf("%d", &index);
		}
		
	}while(index);
	
	
}
