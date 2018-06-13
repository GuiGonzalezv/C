#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100


void add();
void show();
void showSetor();
float totalProduto();
void menu();


struct produto {
	char nome[15];
	char setor[MAX];
	int quant;
	float preco;
} estoque[MAX];

struct pessoa {
	char nome[15];
	float salario;
} funcionarios[MAX];


int main(void){

	int c;

	while(c != 5){
		menu();
		scanf("%d", &c);

		if(c == 1){
			add();
		}
		else if(c == 2){
			show();
		}
		else if(c == 0){
			system("cls");
		}
		else if(c == 3){
			showSetor();
		}

	}
}

float totalProduto(){

	float soma;

	soma = estoque[0].preco;

	for(int i = 1; i < MAX; i++){

		if(!*estoque[i].nome){
			break;
		}
		soma += estoque[i].preco;
	}

	return soma;

}

void showSetor(){

	char nomeFuncionario[15];
	int flag = 0;

	printf("Qual funcionario voce deseja visualizar:");
	scanf("%s", nomeFuncionario);

	printf("\nNome do funcionario escolhido: %s \n", nomeFuncionario);

	for(int i = 0; i < MAX; i++){

		if(!*funcionarios[i].nome){
			if(flag == 0){
				printf("\nNao ha funcionario\n");
				printf(":/\n");
			}
			break;
		}
		if(strcmp(nomeFuncionario,funcionarios[i].nome) == 0){
			printf("\n\tNome do Funcionario: %s", funcionarios[i].nome);
			flag = 1;
		}
	}

	printf("\n");

}


void menu(){

	printf("\n\t0 - Limpar");
	printf("\n\t1 - Adicionar");
	printf("\n\t2 - Mostrar Funcionarios");
	printf("\n\t5 - Sair\n");

}

void add(){
	
	int n;

	printf("\nDigite a quantidade de funcionarios que ira informar: ");
	scanf("%d", &n);

    for(int i = 0 ; i < n; i++){
        
		for(int j = 0; j < MAX; j++){

			if(!*funcionarios[j].nome){

				printf("\n\tNome do funcionario: ");
				scanf("%s", &funcionarios[j].nome);

				printf("\n\tSalario do funcionario: ");
				scanf("%f", &funcionarios[j].salario);
				
				break;
			}

		}
    
	}

}

void show(){

	for(int i = 0; i < MAX; i++){
		
		if(!*funcionarios[i].nome){
			break;
		}

		printf("\n%d Dado: \n", i+1);
		printf("\n\tNome do funcionario: %s", funcionarios[i].nome);
		printf("\n\tSalario do funcionario: %.2f\n", funcionarios[i].salario);

	}

}
