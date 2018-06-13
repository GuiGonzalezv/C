#include <stdio.h>
#include<conio.h>
#include "F:\IFSP - Jacarei - ADS\Algoritimo e Linguagem de Programação - Sóseles\Aula I - 06-03-18"


void imprime_cabec(void)
{
  printf("******************************\n");
  printf("*      GUILHERME GONZALEZ    *\n");
  printf("******************************\n\n");
  
  printf("******************************\n");
  printf("*    IFSP JACAREI 06/03/18   *\n");
  printf("******************************\n\n");
 
  return;
}

float perguntaNota(float variavel){
	
	printf("Digite suas notas: ");
	scanf("%f", &variavel);
	fflush(stdin);
	return variavel;
}

float medianota(float nota1, float nota2, float nota3, float nota4){
	float medias;
	medias = ((nota1 + nota2 + nota3 + nota4)/4);
	return medias;
}


main(){
	imprime_cabec();
	char Nome[20], disciplina[20];
	int idade;
	float  nota1, nota2, nota3, nota4, media;
	
	printf("Digite seu nome: ");
	scanf("%s", &Nome);
	fflush(stdin);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	fflush(stdin);
	
	printf("Digite a disciplina: ");
	scanf("%s", &disciplina);
	fflush(stdin);
	
	

	nota1 = perguntaNota(nota1);
	nota2 = perguntaNota(nota2);
	nota3 = perguntaNota(nota3);
	nota4 = perguntaNota(nota4);
	media = medianota(nota1, nota2, nota3, nota4);

	
	printf("Nome: %s \n Idade: %d \n Disciplina: %s \n Media: %.2f ", Nome, idade, disciplina, media);
	
	if(media >= 6){
		printf("Voce foi APROVADO");
	}
	else if((media >=4) && (media <=6)){
		printf("Voce esta de RECUPERACAO");
	}
	else{
		printf("Voce foi REPROVADO");
	}
}
