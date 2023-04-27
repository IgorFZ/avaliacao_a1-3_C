#include <stdio.h>

int num = 0, count = 0;

int main(void) {

  do {
    count = 0;
    printf("Digite um número: ");
    scanf("%i", &num);

    // verificando se é maior que 0
    if (num > 0) {
      // contando os digitos
      while (num > 0) {
        num = num/10;
        count++;
      }
      // imprimindo na tela a quantidade de digitos
      printf("Digitos: %i", count);
    }
  } while(num > 0);
  
  return 0;
}