// Leia um número e imprima o resultado do quadrado deste número

#include <stdio.h>

int main(){

  float num;

  printf("Insira um número e este programa irá realizar o cálculo do quadrado dele: ");
  scanf("%f", num);

  float calculo_quadrado = num * num;

  printf("O quadrado de %f é %f", num, calculo_quadrado);



}