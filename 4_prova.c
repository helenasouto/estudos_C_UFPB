#include <stdio.h>
#include <string.h>
#include <math.h>

double fatorial (int numero){
  int resultado=1;
  printf("Digite o número que você deseja calcular o fatorial: \n");
  scanf("%d", &numero);
  if (numero == 0){
    return 1;
  }
  else{
    for (int i = numero; i >= 1; i--){
      resultado *= i;
    }
  } 
  return resultado;
}
double exponencial (int base,int expoente){
  
  printf("Digite a base:\n");
  scanf("%d", &base);
  printf("Digite o expoente:\n");
  scanf("%d", &expoente);
  if (expoente ==0){
    return 1;
  }else{
    return pow(base, expoente);
  }
}
int equacao (int a, int b, int c){
  printf("Digite o valor de a:\n");
  scanf("%d", &a);
  printf("Digite o valor de b:\n");
  scanf("%d", &b);
  printf("Digite o valor de c:\n");
  scanf("%d", &c);

  if (a == 0){
    printf("Quando o a é 0 a equação não é mais de segundo grau, portanto não se pode calcular suas raízes\n");
  }
  if (a !=0){
   double raiz1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
   double raiz2 = (-b - sqrt(b*b - 4*a*c))/(2*a); 

   printf("As raízes da equação são: %2.f e %2.f\n", raiz1,raiz2);  
  }
}

int main(){
  int resp, numero, base, expoente, a,b,c;
  char opcao = 's';

  while (opcao == 's'){
      printf("Escolha a operação que você deseja realizar:\n");
      printf("[1] FATORIAL\n [2] EXPONENCIAL\n [3] EQUAÇÃO DE SEGUNDO GRAU\n");
      scanf("%d", &resp);

      switch (resp){
        case 1:
          printf("O fatorial é: %2.f\n", fatorial(numero));
          break;
        case 2:
          printf("O exponencial é: %2.f\n", exponencial(base, expoente));
          break;
        case 3:
          printf("%d\n", equacao (a,b,c)); 
          break;
        default:
        printf("Você selecionou uma opção inválida!");
      }
    printf("\nDeseja calcular novamente? [s] para SIM [n] para NÃO\n");
    scanf("%s",&opcao);
  if (opcao == 'n'){
    printf("Volte sempre!");
  }
  }
}