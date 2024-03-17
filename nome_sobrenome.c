#include <stdio.h>
#include <string.h>

int main (void){
  char nome_completo [100];
  
  printf("Digite seu nome completo (com espacos entre seu nome e sobrenome):\n");
  fgets (nome_completo, 100, stdin);
  nome_completo[strcspn(nome_completo, "\n")] = '\0';

  char nome [50], sobrenome [50];
  int i =0, j= 0;

while (nome_completo [i] != ' ' && nome_completo != '\0'){
    nome [i] = nome_completo[i];
    i++;
}
nome [i] = '\0';
i++;

while (nome_completo[i] != '\0') {
    sobrenome [j] = nome_completo[i];
    i++;
    j++;
}
sobrenome[j] = '\0';

printf("Seu nome: %s\n",nome);
printf("Seu sobrenome: %s\n",sobrenome);
}