#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int TurmaLogica[10] = {98765,98654,89765,90876,90087,99987,96549,99321,91238,94358};
	int TurmaLinguagem[8] = {98765,98654,89765,90876,90087,99987,96549,99321};
	
	for(int i = 0;i<10;i++){
		for(int j =0;j<8;j++){
			if(TurmaLogica[i]==TurmaLinguagem[j]){
				printf("O RA %d faz as duas materias\n",TurmaLogica[i]);
			}
			
		}
	}
   system("pause");
   return 0;
}
