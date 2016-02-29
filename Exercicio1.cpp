#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int vetor[6] = {1,58,4,8,4,3};
	int countPar=0;
	int countImpar=0;
	
	
	for(int i = 0;i<6;i++){
		if(vetor[i] % 2 == 0){
			countPar++;
			printf("Vetor[%d] = %d eh par\n",i,vetor[i]);}
		else{
			countImpar++;
			printf("Vetor[%d] = %d eh impar\n",i,vetor[i]);
		}
	}
	
	printf("O vetor tem %d numeros pares\n",countPar);
	printf("O vetor tem %d numeros impares\n",countImpar);
	
	
	system ("pause");
	return 0;
	
	
}
