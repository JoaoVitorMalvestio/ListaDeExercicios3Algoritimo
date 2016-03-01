#include <stdio.h>
#include <stdlib.h>

int Fatorial(int num){
    for(int i = num-1;i>0;i--){
            num = num * i;
    }    
    return num;
}


int main (void){
    int num=0,fat=0;
    
    printf("Entre com um valor inteiro: ");
    scanf("%d",&num);
    
    fat=Fatorial(num);
    printf("Fatorial eh de %d eh %d\n",num,fat);
    
    system("Pause");
    return 0;
}
