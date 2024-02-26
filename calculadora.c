#include <stdio.h>

  int main(void){

   int operacao;
   float numero1, numero2, soma, sub, mult,div;
    printf("--------CALCULADORA--------");
    printf("\n[1] SOMAR\n");
    printf("[2] SUBTRAIR\n");
    printf("[3] MULTIPLICAR\n");  
    printf("[4] DIVIDIR\n");

    printf("\nSelecione a operacao\n");
    scanf("%d",&operacao);
    //leitura da operação que o usuário quer realizar 

    switch(operacao){
      case 1:
      //soma
      printf("\nQuais numeros deseja somar? (escolher no maximo dois numeros) \n");
      printf("Digite o primeiro numero: \n");
      scanf("%f",&numero1);
      printf("Digite o segundo numero: \n");
      scanf("%f",&numero2);
      soma = numero1 + numero2;
      printf("\nO resultado da soma: %3.f\n",soma);
      break;

      case 2:
      //subtração
      printf("\nQuais numeros deseja subtrair? (escolher no maximo dois numeros) \n");
      printf("Digite o primeiro numero: \n");
      scanf("%f",&numero1);
      printf("Digite o segundo numero: \n");
      scanf("%f",&numero2);
      sub = numero1 - numero2;
      printf("\nO resultado da subtracao: %3.f\n",sub);
      break;

      case 3:
      //multiplicação
      printf("\nQuais numeros deseja multiplicar? (escolher no maximo dois números) \n");
      printf("Digite o primeiro numero: \n");
      scanf("%f",&numero1);
      printf("Digite o segundo numero: \n");
      scanf("%f",&numero2);
      mult = numero1 * numero2;
      printf("\nO resultado da multiplicacao: %3.f\n",mult);
      break;

      case 4:
      //divisão
      printf("\nQuais numeros deseja dividir? (escolher no maximo dois numeros) \n");
      printf("Digite o primeiro numero: \n");
      scanf("%f",&numero1);
      printf("Digite o segundo numero: \n");
      scanf("%f",&numero2);
      div = numero1 / numero2;
      printf("\nO resultado da divisao: %3.f\n",div);
      break;
      default: 
      printf("Voce selecionou uma opcao invalida!");
 
    }
    //o switch case permite especificar os comandos a depender do caso, da operação escolhida pelo usuário

  }