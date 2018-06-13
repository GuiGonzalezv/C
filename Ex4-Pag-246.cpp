#include <stdlib.h>
#include <stdio.h>

int transformacao(int segundo){
	int h, m, s, r;
	
	h = segundo / 3600;
	r = segundo % 3600;
	m = r / 60;
	s = r % 60;
	printf("Horas: %d \n Minutos: %d \n Segundos: %d", h, m, s);
}


main(){
	int segundos, resultado;
	
	printf("Digite a quantidade de segundos: ");
	scanf("%d", &segundos);
	
	resultado = transformacao(segundos);
	
	
}
