#include <stdio.h>
#include <stdlib.h>

int main(){
  float notas[5];
  float soma = 0.0;
  float media;
  int i = 0;
  
  printf("Insira 5 notas:\n");
  for(i=0; i<5; i++){
      scanf("%f", & notas[i]);
  }
  
  for(i=0; i<5; i++){
      soma += notas[i];
  }
  media = soma / 5.0;
  
  printf("sua média será: %.1f\n", media);
  
}