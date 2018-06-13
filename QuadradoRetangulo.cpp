#include <stdio.h>

main(){
	float l1, l2, l3, l4;
	
	printf("Informe o lado 1: ");
	scanf("%f", &l1);
	
	printf("Informe o lado 2: ");
	scanf("%f", &l2);
	
	printf("Informe o lado 3: ");
	scanf("%f", &l3);
	
	printf("Informe o lado 4: ");
	scanf("%f", &l4);
	
	if((l1 == l2) && (l2 == l3) && (l3 == l4) ){
		printf("EH quadrado");
	}
	else if((l1 == l3) && (l1 != l2) && (l2 == l4) || ((l1 ==l2)&&(l2 != l3) && (l3 == l4)))
	{
		printf("retangulo");
	}
	else{
		printf("Nao e quadrado, nem retangulo ");
	}
	
}
