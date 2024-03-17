#include <stdio.h>
#include <conio.h>
#include <string.h>

int main (){
    char nome[50],sobrenome[50];
      int i,j=0,tam,sei;
      printf("Digite seu nome completo:&quot;
      fflush(stdin);
      gets (nome);
      tam=strlen(nome);
     
      for (i=tam-1;nome[i]!=' ';i--)
       { 
        sobrenome[j]=nome[i];
        j++;
        
       } 
         
      
      sei=strlen(sobrenome);
      printf("%d",sei);
      printf("%s",sobrenome);
    
      getch();
}


    