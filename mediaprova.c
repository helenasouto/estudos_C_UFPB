#include <stdio.h>

int main (void){

int num1,num2,media, resp;

do{ 
    printf("Digite um número:\n");
    scanf("%d",&num1);
    printf("Digite outro número:\n");
    scanf("%d",&num2);

    media = (num1+num2)/2;

    printf("A media entre os números é: %d\n", media);

    printf("Digite 0 para parar: ");
    scanf("%d", &resp);

}while (resp != 0);
}