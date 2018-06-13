#include <stdio.h>
#include <conio.h>
#include <stdlib.h>




void imprime_cabec(void)
{
  printf("******************************\n");
  printf("*      GUILHERME GONZALEZ    *\n");
  printf("******************************\n\n");
  
  printf("******************************\n");
  printf("*    IFSP JACAREI 12/03/18   *\n");
  printf("******************************\n\n");
 
  return;
}

int perguntacodigo(int variavel){
	
	printf("Digite o codigo do cargo: ");
	scanf("%d", &variavel);
	fflush(stdin);
	return variavel;
}

float perguntaSal(float variavel){
	
	printf("Digite seu Salario: ");
	scanf("%f", &variavel);
	fflush(stdin);
	return variavel;
}

void menu(void){
	imprime_cabec();
	printf("Escolha um codigo no menu: \n \n[1] Escrituario \n [2]Secretario \n [3]Caixa \n [4]Gerente \n [5]Diretor \n [6]Limpar tela \n [7]Sair \n \n");
	return;
}

float Escrituario(float variavel){
	printf("============================CARGO===============================================\n");
	printf("Cargo: Escrituario \n Percentual: 50% \n");
	printf("=============================================================================== \n \n");
	float newsalario;
	newsalario = variavel + ((variavel * 50) / 100);
	return newsalario;
	
}

float Secretario(float variavel){
	printf("============================CARGO===============================================\n");
	printf("Cargo: Secretario \n Percentual: 35% \n");
	printf("=============================================================================== \n \n");
	float newsalario;
	newsalario = variavel + ((variavel * 35) / 100);
	return newsalario;
	
}

float Caixa(float variavel){
	printf("============================CARGO===============================================\n");
	printf("Cargo: Caixa \n Percentual: 20% \n");
	printf("=============================================================================== \n \n");
	float newsalario;
	newsalario = variavel + ((variavel * 20) / 100);
	return newsalario;
	
}
float Gerente(float variavel){
	printf("============================CARGO===============================================\n");
	printf("Cargo: Gerente \n\n Percentual: 20% \n");
	printf("=============================================================================== \n \n");
	float newsalario;
	newsalario = variavel + ((variavel * 10) / 100);
	return newsalario;
	
}
float Diretor(float variavel){
	printf("============================CARGO===============================================\n");
	printf("Cargo: Diretor \n Percentual: 0% \n");
	printf("=============================================================================== \n \n");
	float newsalario;
	newsalario = variavel;
	return newsalario;
	
}


main(){
	//variaveis
	int Codigo;
	float salario, salEscrituario, salSecretario, salCaixa, salGerente, salDiretor;
	
	do{
		menu();
		salario = perguntaSal(salario);
		Codigo = perguntacodigo(Codigo);

		switch(Codigo){
			case 1:
				salario = Escrituario(salario);
				printf("============================RESULTADO ========================================\n");
				printf("Novo salario igual a: %.2f \n", salario);
				printf("==============================================================================\n \n");
				break;
				
			case 2:
				salario = Secretario(salario);
				printf("============================RESULTADO ========================================\n");
				printf("Novo salario igual a: %.2f \n", salario);
				printf("==============================================================================\n \n");
				break;
				
			case 3:
				salario = Caixa(salario);
				printf("============================RESULTADO ========================================\n");
				printf("Novo salario igual a: %.2f \n", salario);
				printf("==============================================================================\n \n");
				break;
				
			case 4:
				salario = Gerente(salario);
				printf("============================RESULTADO ========================================\n");
				printf("Novo salario igual a: %.2f \n", salario);
				printf("==============================================================================\n \n");
				break;
			
			case 5:
				salario = Diretor(salario);
				printf("============================RESULTADO ========================================\n");
				printf("Novo salario igual a: %.2f \n", salario);
				printf("==============================================================================\n \n");
				break;
			
			case 6:
				system("cls");
				break;
				menu();
				scanf("%d", &Codigo);
				
				
			default:
				system("cls");
				printf("==============================================================================\n \n");
				printf("ESSE CARGO NAO EXISTE NO MENU \n\n");
				printf("==============================================================================\n \n");
				break;
				menu();
				scanf("%d", &Codigo);
				
		}
	}while(Codigo);
}
