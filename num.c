#include <stdio.h>

int main (void){
  int resp, maior = -2147483647, menor = 2147483647;
  int soma = 0;

  do {
    printf("Digite um numero: \n");
    scanf("%d", &resp);
  

    soma = soma + resp;

  if (resp > maior){
    maior = resp;
  }
  if (resp < menor && resp != 0){
    menor = resp;
  } 
  }while (resp != 0);
  printf("O maior numero digitado é: %d\n", maior);
  printf("O menor numero digitado é: %d\n", menor);
  printf("A soma dos números digitados é: %d\n", soma);

    
}