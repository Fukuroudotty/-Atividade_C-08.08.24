#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[6]= {1, 0 ,5, -2, -5, 7};
    int soma = 0;
    int i;
    
    soma = a[0] + a[1] + a[5];
    printf("Soma: %d\n", soma);
    
    for (i=0; i<6; i++){
        printf("%d", a[i]);
    }


    
}