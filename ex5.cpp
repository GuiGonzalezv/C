#include <stdio.h>
#include <unistd.h>

void imprime_cabec(void)
{
  printf("******************************\n");
  printf("*      GUILHERME GONZALEZ    *\n");
  printf("******************************\n\n");
  
  printf("******************************\n");
  printf("*    IFSP JACAREI 27/03/18   *\n");
  printf("******************************\n\n");
 
  return;
}

void menu(void){
	imprime_cabec();
	printf("Escolha um codigo no menu: \n \n[1] Selecionar uma tabuada \n [2]Mostrar tabuada do 1 ao 10 \n [3]Ex Ingressos \n [4]Limpar tela \n [5]Sair \n \n");
	return;
}

main(){
	 int numero, index, result, i, j;
	 float precoIngresso, despesas, ingressosVendidos, dinheiroRecebido,lucroTotal;
	 
	 do{
	 	imprime_cabec();
	 	menu();
	 	scanf("%d", &index);
	 	fflush(stdin);
	 	
	 	switch(index){
		
			case 1:
				printf("Insira qual taboada deseja: ");
				scanf("%d", &numero);
				fflush(stdin);
				
				for(i=0; i<=10; i++){
					result = numero * i;
					printf("%d x %d = %d \n", numero, i, result );
				}
				sleep(4);
				
			case 2:
				for(j=0; j<=10; j++){
					for(i=0; i<=10; i++){
						result = j * i;
						printf("%d x %d = %d \n", j, i, result );
					}
				}
				sleep(4);
				
			case 3:
				precoIngresso = 5;
				despesas = 200;
				ingressosVendidos = 120;
				
				
				while(precoIngresso >= 0.50){
					precoIngresso = precoIngresso - 0.50;
					ingressosVendidos = ingressosVendidos + 26;
					dinheiroRecebido = (precoIngresso * ingressosVendidos);
					lucroTotal = dinheiroRecebido - despesas;	
					printf("=========================TABELA DE PRECOS ================================= \n");
					printf("Preço do ingresso: %.2f \n Lucro maximo esperado: %.2f \n Quantidade de ingressos vendidos: %.2f \n", precoIngresso, lucroTotal, ingressosVendidos);
					printf("=========================================================================== \n \n \n");
				}
				sleep(4);
			
			case 4:	
				system("cls");
				break;
				menu();
				scanf("%d", &index);
			
			case 5:
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

