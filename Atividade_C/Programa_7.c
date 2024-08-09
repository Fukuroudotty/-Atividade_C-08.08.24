#include <stdio.h>
#include <stdlib.h>

int main(){
    int X[10];
    int i;
    int maior, menor;
    
    printf("Insira 10 números:\n");
    for(i=0; i<10; i++){
    scanf ("%d", &X[i]);
} 

    maior = X[0];
    menor = X[0];
    
    for(i=0; i<10; i++){
        if(X[i] > maior){
            maior = X[i];
        }
        if(X[i] < menor){
            menor = X[i];
    }
    
}
    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);


}