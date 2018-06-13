#include <stdio.h>
#include <stdlib.h>

int interVetor(int x[10], int y[10]){
	int n;
	
		for(int i=0;i<10;i++){
	    
		    if(x[i] == y[i]){
	    
		        printf("Interseccao: %d \n", x[i]);
		        
	        }
	
	    }
}


int main(void)
{
    int x[10], y[10];
    int i;
    for(i=0;i<10;i++){
        printf("Preenche o vetor X[%d] \n",i);
        scanf("%d",&x[i]);
        printf("Preenche o vetor Y[%d] \n",i);
        scanf("%d",&y[i]);
    }
    
   	interVetor(x,y);
    return 0;
}
