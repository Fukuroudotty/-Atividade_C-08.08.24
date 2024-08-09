#include <stdio.h>
#include <stdlib.h>

int main(){
    float n[10];
    int i = 0;
    int negativo = 0;
    float soma_positivos = 0.0;
    
    printf("Insira 10 números:\n");
    for(i=0; i<10; i++){
        scanf("%f", &n[i]);
    }
    for(i=0; i<10; i++){
        if(n[i] <0){
            negativo++;
        }else if(n[i] > 0) {
            soma_positivos += n[i];
        }
    }
    
    printf("Quantidade de números negativos: %d\n", negativo);
    printf("Soma dos números positivos: %.1f\n", soma_positivos);


    
}