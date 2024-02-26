#include <stdio.h>

int main (void){
    int idade, anonasc, atual;

    printf("Digite o ano em que o atleta nasceu:\n");
    scanf("%d", &anonasc);
    //leitura do ano de nascimento do atleta
    printf("Digite o ano em que estamos:\n");
    scanf("%d", &atual);
    //leitura do ano atual permite que o programa possa ser usado para qualquer ano, não apenas para 2024

    idade = atual - anonasc;
    //cáculo da idade, cujo resultado será armazenado na variável (idade)
    printf("Idade do atleta: %d\n", idade);

    printf("Nadador de idade: %d faz parte da categoria: ", idade);
    //não foi colocado o "\n" nesse print porque é preciso que a resposta obtida pela estrutura condicional
    //se encaixe, como se fosse um único "printf"

    if (5<=idade && 7>=idade){
        printf("Infantil A\n");
    }
    else if (8<=idade && 10>=idade){
        printf(" Infantil B\n");
    }
    else if (11<=idade && 13>=idade){
        printf(" Juvenil A\n");
    }
    else if (14<=idade && 17>=idade){
        printf(" Juvenil B\n");
    }
    else if (idade>17){
        printf(" Senior\n");
    }

    //estruturas condicionais feitas para informar a categoria do atleta mediante sua idade
}




