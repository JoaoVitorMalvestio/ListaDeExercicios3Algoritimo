#include <stdio.h>
#include <stdlib.h>

int main (void){
    
    int vetor[8] = {1,58,4,8,4,3,18,8};
    int countMul2=0;
    int countMul3=0;
    int countMult2e3=0;
    
    for(int i = 0;i<8;i++){
            if(vetor[i] % 2 == 0 && vetor[i] % 3 == 0){
                        countMult2e3++;
                        printf("Vetor[%d] = %d eh multiplo de 2 e 3\n",i,vetor[i]);}
            else{
                 if(vetor[i] % 2 == 0){
                             countMul2++;
                             printf("Vetor[%d] = %d eh multiplo de 2\n",i,vetor[i]);}
                             if(vetor[i] % 3 == 0){
                                         countMul3++;
                                         printf("Vetor[%d] = %d eh multiplo de 3\n",i,vetor[i]);}
                             }
                 }
	system("pause");
	return 0;
}
