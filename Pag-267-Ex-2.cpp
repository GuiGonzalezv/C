#include <stdlib.h>
#include <stdio.h>

int convertSegundos(int horas, int minutos, int segundos){
	
	int horasSeg = horas * 3600;
	int minutoSeg = minutos * 60;

	int s;
	s = horasSeg + minutoSeg + segundos;
	
	return s;
}

main(){
	int horas, minutos, segundos, resultado;
	
	printf("Digite as horas: ");
	scanf("%d", &horas);
	
	printf("Digite os minutos: ");
	scanf("%d", &minutos);
	
	printf("Digite os segundos: ");
	scanf("%d", &segundos);
	
	resultado = convertSegundos(horas, minutos, segundos);
	
	printf("Segundos ==>  %d", resultado);
	
}
