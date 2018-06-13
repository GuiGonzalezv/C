#include <stdio.h>


main(){
	int idade;
	int peso;
	float altura,media,  alturas;
	int cont;
	float porcentagem;
	int cinquentao, contador;
	int idade10e20 = 0;
	int menorque40quilos = 0;
	
	alturas = 0;
	altura = 0;
	cont = 0;
	
	contador = 0;
	
	
	while(cont <= 3){
		printf("===========PESSOA=============\n \n");
		printf("Informe a idade da pessoa: ");
		scanf("%d", &idade);
		fflush(stdin);
		
		printf("Informe o peso da pessoa: ");
		scanf("%d", &peso);
		fflush(stdin);
		
		printf("Informe a altura da pessoa: ");
		scanf("%f", &altura);
		fflush(stdin);
		
		printf("======================================\n \n");
		
		if(idade > 50){
			cinquentao = cinquentao + 1;
		}
		
		if((idade>=10 ) && (idade<=20)){
			contador = contador + 1;
			alturas = alturas + altura;
			media = alturas / contador;
			
		
		}
		if(peso < 40){
			menorque40quilos = menorque40quilos + 1;
			porcentagem = (((float)menorque40quilos * 100.0) / 4.0);
		}
		
	
		
		cont = cont +1;
		
	}
		printf("===========RESULTADO=============\n \n");
		printf("\n Existem %d pessoas acima dos 50 anos \n media de %.2f de altura das pessoas entre 10 e 20 anos\n e %.2f %% tem menos que 40 quilos \n", cinquentao, media, porcentagem);
		printf("======================================\n \n");
	
	
}
