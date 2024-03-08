#include <stdio.h>
#include <string.h>

int main (void){
  char nome_completo [100];
  
  printf("Digite seu nome completo (com espacos entre seu nome e sobrenome):\n");
  fgets (nome_completo, 100, stdin);
  nome_completo[strcspn(nome_completo, "\n")] = '\0';

char nome [50], sobrenome [50];

char *token = strtok(nome_completo, " ");

if (token != NULL){
    strcpy(nome, token);
    token = strtok(NULL, " ");
}

while (token != NULL){
    strcat(sobrenome, token);
    strcat(sobrenome, " ");
    token = strtok (NULL, " ");
}

printf("Seu nome: %s\n", nome);
printf("Seu sobrenome: %s\n", sobrenome);
}