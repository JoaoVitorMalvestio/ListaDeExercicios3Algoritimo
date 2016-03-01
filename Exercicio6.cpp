#include <stdlib.h>
#include <stdio.h>

int SomaDivisores(int num){
    int aux=0;
    
    for(int i=1;i<num;i++){
            if(num%i == 0){
                     aux = aux + i;
            }
    }
    
    return aux;
}

int main (void){
    int num=0,somadiv=0;
    
    printf("Entre com um numero inteiro: ");
    scanf("%d",&num);
    
    somadiv = SomaDivisores(num);
    printf("A soma dos divisores de %d eh %d\n",num,somadiv);
    
    system("pause");
    return 0;    
}
