#include <stdio.h>
#include <string.h>

int vetor_de_inteiros (int arr1[]){
  for (int i = 0; i < 10; i++){
    if (arr1[i] %2 ==0){
      arr1[i] = 1;
    }
    else{
      arr1[i] = 0;
    }
  }
}
int main (){
  int arr1[10] = {2, 5, 7, 4, 8, 9, 12, 17, 23, 6};

  for (int i =0; i<10; i++){
    printf("Antes: ");
    printf("%d, ", arr1[i]);
  }
  vetor_de_inteiros(arr1);
  for (int i=0; i<10; i++){
    printf("Depois: ");
    printf("%d, ", arr1[i]);
  }
  
  return 0;
 
}