#include <stdio.h>
int main (void){
  float n1, n2, n3, media;
  getchar();
  printf("Informe a primeira nota: \n");
  scanf("%f",&n1);
  printf("Informe a segunda nota: \n");
  scanf("%f",&n2);
  printf("Informe a terceira nota: \n");
  scanf("%f",&n3);

  media = (n1+n2+n3)/3;

  printf("media:\n %3.f\n", media);
  if (media >= 7){
    printf("Parabens! Voce foi Aprovado!");
  }
  else  {
     printf("Sinto Muito, voce foi Reprovado!");
  }
 
}