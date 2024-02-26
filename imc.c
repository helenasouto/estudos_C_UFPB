#include <stdio.h>

int main (void){

    float peso, altura, imc;
    //variáveis que armazenarão o peso, a altura e o imc do usuário
    //é do tipo float porque o peso, a altura e o imc podem ser números decimais.

    printf("\n----------CALCULADORA DE IMC----------\n");

    printf("Digite o peso (ex.: 67.5): \n"); 
    scanf("%f", &peso);
    //leitura do peso informado pelo usuário
    printf("Digite a altura (ex.: 1.70): \n");
    scanf("%f", &altura);
    //leitura da altura informada pelo usuário
    imc = peso / (altura*altura);
    //cálculo para encontrar o imc, com o resultado armazenado na variável "imc"

    if (imc < 18.5){
        printf("Voce esta abaixo do peso ideal! Com imc: \n%.2f", imc);
    }
    else if (imc >= 18.5 && imc <= 24.9){
        printf("PARABENS!! Voce esta no peso normal, com imc: \n%.2f", imc);
    }
    else if (imc >= 25 && imc <= 29.9){
        printf("Voce esta acima do peso! (sobrepeso), com imc: \n%.2f", imc);
    }
    else if (imc >= 30 && imc <= 34.9){
        printf("Obesidade grau I, com imc: \n%.2f", imc);
    }
    else if (imc >= 35 && imc <= 39.9){
        printf("Obesidade grau II, com imc: \n%.2f", imc);
    }
    else if (imc >= 40){
        printf("Obesidade grau III, com imc: \n%.2f", imc);
    }
    //estruturas condicionais if e else if para relacionar o valor do imc e informar o estado 
    //do usuário
}