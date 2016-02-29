#include <stdio.h>
#include <stdlib.h>

double PesoIdeal(double altura,char sexo){
	double pesoIdeal = 0;
	
	if(sexo == 'm'){
		pesoIdeal = ( 72.7 * altura ) - 58;
		return pesoIdeal;
	}
	
	if(sexo == 'f'){
		pesoIdeal = ( 62.1 * altura ) - 44.7;
		return pesoIdeal;
	}
}

int main (void){
	double altura=0;
	char sexo;
	double pesoideal=0;
	
	printf("Entre com seu sexo (m ou f) e sua altura separados por espaco: ");
	scanf("%c %lf",&sexo,&altura);
	
	pesoideal = PesoIdeal(altura,sexo);
	printf("Seu peso ideal eh %lf\n",pesoideal);
	
	system("pause");
	return 0;
}
