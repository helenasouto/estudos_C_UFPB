#include <stdio.h>
#include <string.h>

int main (void){
  char nome_completo [100];
  char nome [50], sobrenome[50];
  int i, tam = 0;
  
  printf("Digite seu nome completo (com espacos entre seu nome e sobrenome):\n");
  scanf("%s", nome);
  scanf("%s", sobrenome);
  tam = strlen(nome);
  
  for (i = tam; nome[i]!=' ';i++){ 
    printf("Seu nome: %s\n",nome);
  break;
  }
  for (i = tam; sobrenome [i]!=tam; i++){ 
    printf("Seu sobrenome: %s\n",sobrenome);
    break;
  }
}