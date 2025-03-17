// Peca ao usuário para digitar 3 valores e imprima a soma deles

#include <stdio.h>

int main(){

  int num1, num2, num3;

  printf("Insira o primeiro número inteiro: ");
  scanf("%d", &num1);

  printf("Insira o segundo número inteiro: ");
  scanf("%d", &num2);

  printf("Insira o terceiro e último numero inteiro?; ");
  scanf("%d", &num3);

  int soma_numeros = num1 + num2 + num3;

  printf("A soma dos valores inteiros informados resulta em: %d", soma_numeros);




}