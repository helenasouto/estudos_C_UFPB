#include <stdio.h>
#include <string.h>

int main(void){
    char matriz[2][10] = {"Helena", "Souto"};
    int i, tamanhonome, tamanhosobrenome, tamanho, totalvogais=0, j;
    char *ponteiro [2];

    tamanhonome = strlen(matriz[0]);
    tamanhosobrenome = strlen(matriz[1]);
    printf("%d caracteres\n", tamanhonome);
    printf("%d caracteres\n", tamanhosobrenome);
 
    tamanho = strlen(matriz[0]) + strlen(matriz[1]);

    printf("Primeira letra de cada palavra em maiusculo:\n");

    for (i=0; i<tamanho; i++){
        printf("%c. %c.\n", matriz[0][0], matriz[1][0]);
    
    break;
    }
for (i=0; i<tamanho; i++){
    for (j=0;  matriz[i][j] != '\0'; j++){
        switch (matriz[i][j]){
            case 'A':
                totalvogais++;
            break;
            case 'a':
                totalvogais++;
            break;
            case 'E':
                totalvogais++;
            break;
            case 'e':
                totalvogais++;
            break;
            case 'I':
                totalvogais++;
            break;
            case 'i':
                totalvogais++;
            break;
            case 'O':
                totalvogais++;
            break;
            case 'o':
                totalvogais++;
            break;
            case 'U':
                totalvogais++;
            break;
            case 'u':
                totalvogais++;
            break;
        }
    }
    printf("O total das vogais eh: %d", totalvogais);
}
*ponteiro == &matriz[0][0];

for (i=0; i<tamanho; i++){
    for (j=0;  matriz[i][j] != '\0'; j++){
        switch (matriz[i][j]){
            case 'A':
                matriz[i][j] = 4;
            break;
            case 'a':
                matriz[i][j] = 4;
            break;
            case 'E':
                matriz[i][j] = 3;
            break;
            case 'e':
                matriz[i][j] = 3;
            break;
            case 'I':
                matriz[i][j] = 1;
            break;
            case 'i':
                matriz[i][j] = 1;
            break;
            case 'O':
                matriz[i][j] = 0;;
            break;
            case 'o':
                matriz[i][j] = 0;
            break;
            case 'U':
                matriz[i][j]=5;
            break;
            case 'u':
                matriz[i][j]=5;
            break;
        }
    }
    printf("Vogais substituidas por numeros:\n");
    for (int i = 0; i < 2; ++i) {
        printf("%s\n", matriz[i]);
 }

}

}


