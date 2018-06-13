#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 3

main(){
	
	int comissao[n], numeroMaiorComissao, numeroMenorComissao;
	char vendedores[n][50];
	float totalVendas[n], totalTodos, maiorComissao, comissaoReal[n], menorComissao;
	
	
	totalTodos = 0;
	maiorComissao = 0;
	menorComissao = 10000000000;
	
	
	for(int i = 0; i < n; i++){
		
		
		printf("===================Vendedor================================\n");

		printf("Informe o nome do vendedor %d: ", i+1);
		fgets(vendedores[i], 50, stdin);
//		scanf("%s", &vendedores[i]);
		fflush(stdin);
		
		printf("Informe o total de vendas: ");
		scanf("%f", &totalVendas[i]);
		fflush(stdin);
		
		printf("Informe a comissao: ");
		scanf("%d", &comissao[i]);
		fflush(stdin);		
		
		printf("============================================================\n \n \n");

		comissaoReal[i] = ((totalVendas[i] * comissao[i])/100);

	}
	
	for(int j = 0; j < n; j++){
		 
		
		totalTodos = totalTodos + totalVendas[j];
		printf("===================RELATORIO================================\n");
		printf(" Vendedor %d: %s \n Porcentagem da comissao: %d \n Total de Vendas: %.2f \n Comissao em R$: %.2f \n", j+1, vendedores[j], comissao[j], totalVendas[j], comissaoReal[j]);
		printf("============================================================\n \n \n");
		
		if(comissaoReal[j] > maiorComissao){
			maiorComissao = comissaoReal[j];
			numeroMaiorComissao = j;
		}
		
		if(comissaoReal[j] < menorComissao){
			menorComissao = comissaoReal[j];
			numeroMenorComissao = j;
		}
	}
	
	printf("===================TOTAL VENDAS================================\n");
	printf("\t R$: %.2f \n", totalTodos);
	printf("============================================================\n \n \n");
	
	printf("===================MAIOR COMISSAO================================\n");
	printf("\t Vendedor: %s \n", vendedores[numeroMaiorComissao]);
	printf("\t R$: %.2f \n", maiorComissao);
	printf("============================================================\n \n \n");
	
	printf("===================MENOR COMISSAO================================\n");
	printf("\t Vendedor: %s \n", vendedores[numeroMenorComissao]);
	printf("\t R$: %.2f \n", menorComissao);
	printf("============================================================\n \n \n");
}
