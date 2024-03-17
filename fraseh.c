#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void){
  char frase[100];
  int tam, i, num_vogais = 0;
  printf("Digite uma frase (de ate 100 caracteres):\n");
  scanf("%s", frase);
  tam = strlen(frase);
  for (i=0; i<tam; i++){
    switch(tolower(frase[i])) {
      case 'a': 
      case 'e':
      case 'i':
      case 'o':
      case 'u':
        num_vogais++;
        break;
      default:
        break;
    }
  }
  printf("Voce digitou %d vogais.\n",num_vogais);
}