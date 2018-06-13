#include <stdio.h>
#include<conio.h>

int pergunta(int variavel){
	
	printf("Digite seu %d: ", variavel);
	scanf("%d", &variavel);
	fflush(stdin);
}
int main(void){

//variaveis
char Nome[20], CPF[20], RG[20], numConta[20];
float saldo;
int variavels;

pergunta(variavels);
//Declara Nome
printf("Digite seu Nome: ");
scanf("%s", &Nome);
fflush(stdin);

//Declara CPF
printf("Digite seu CPF: ");
scanf("%s", &CPF);
fflush(stdin);

//Declara RG
printf("Digite seu RG: ");
scanf("%s", &RG);
fflush(stdin);

//Declara Numero da conta
printf("Digite seu Numero da conta: ");
scanf("%s", &numConta);
fflush(stdin);

//Declara Saldo
printf("Digite seu Saldo: ");
scanf("%f", &saldo);
fflush(stdin);

//exibe na tela os resultados
printf("Nome: %s \n CPF: %s \n RG: %s \n Numero de Conta: %s \n Saldo: %2.f \n", Nome, CPF, RG, numConta, saldo);
}


