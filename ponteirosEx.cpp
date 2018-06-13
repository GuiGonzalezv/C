#include <stdio.h>
#include <stdlib.h>

main(){
	int a = 5;
	int b = 7;
	
	//Declaro o ponteiro
	int *ponteiro;
	
	//Digo que o ponteiro recebe o endereco de da variavel a
	ponteiro = &a;
	
	printf("Ponteiro A=> %d", ponteiro);
	
	//Atribuo o valor 10 a variavel (A) a partir do ponteiro !!
	*ponteiro = 10; 
	printf("Ponteiro A=> %d", a);	
}
