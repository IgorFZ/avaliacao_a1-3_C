#include <stdio.h>

int main(void) {
  char categoria;
  float quantidade = 0, soma, total = 0.0;
  float media;

  do {
    printf("\nInforme a Categoria: ");
    scanf(" %c", &categoria);

    do {
      printf("Informe a Quantidade: ");
      scanf(" %f", &quantidade);
    } while (quantidade <= 0);
    

    soma = soma + quantidade;
    total++;

    if (total > 0) {
      printf("%f", total);
      media = soma / total;
    }
    
  } while (categoria == 'A' || categoria == 'B' || categoria == 'C');

  printf("A media dos produtos eh %.2f", media);

  return 0;
}