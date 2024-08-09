#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10];
    int i, cont_pares = 0;
    
    printf("Insira 10 números inteiros: \n");
    for(i=0; i<10; i++){
        scanf("%d", &a[i]);
    }
    
    for(i=0; i<10; i++){
        if(a[i] %2 ==0){
            cont_pares++;
        }
    }
    printf("Quantidade de pares: %d\n", cont_pares);

    
}
    
