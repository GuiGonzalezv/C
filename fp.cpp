#include<stdio.h>
#include<stdlib.h>

main(){
       
       int num1 = 0, num2 = 0; 
       int soma = 0, subtraccao = 0, multiplicacao = 0, divisao = 0;
       
       FILE *fp, *fc;
       
       fp = fopen("numeros.txt", "r");
       
           if(fp==NULL){
                        
               printf("Impossivel abrir o ficheiro\n");
               
           }else{
                 
               fscanf(fp, "%d \n %d", &num1, &num2);
               
           } 
             
       fc = fopen("contas.txt","w");
       
           if(fc==NULL){
       
               printf("Impossivel abrir o ficheiro\n");
       
           }else{
       
           soma = (num1+num2);
           subtraccao = (num1-num2);
           multiplicacao = (num1*num2);
           divisao = (num1/num2);
       
           fprintf(fc," %d \n %d \n %d \n %d \n",soma,subtraccao,multiplicacao,divisao);
       
           }
       
       fclose(fp);
       
       fclose(fc);

system("pause");

}
