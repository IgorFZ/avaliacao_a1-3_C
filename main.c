#include <stdio.h>

float taxa_depreciacao = 1.5, valor_bem, depreciacao, valor_depreciado, depreciacao_total = 0;
int anos = 0;

int main(void) {
  // pedindo dados
  printf("Valor a ser depreciado: ");
  scanf("%f", &valor_bem);
  printf("Periodo(em anos): ");
  scanf("%i", &anos);

  // printa o cabecalho da tabela
  printf("\n\nAno\t\tValor do Bem\t\tDepreciação\t\tValor Depreciado\n"); 
  printf("==============================================================\n");
  
  for(int i = 0; i < anos; i++) {
    depreciacao = (valor_bem*(taxa_depreciacao/100)); // calculo da depreciacao
    valor_depreciado = valor_bem - depreciacao; // valor do bem dps da depreciacao

    // printa uma linha da tabela
    printf("%2d\t\t%11.2f\t\t\t\t%6.2f\t\t\t%6.2f\n", i+1, valor_bem, depreciacao, valor_depreciado); 
    
    valor_bem = valor_depreciado; // atualizando o valor do bem pra proxima vez
    depreciacao_total = depreciacao_total + depreciacao; // somando a depreciacao a depreciacao total
  }

  printf("==============================================================\n");
  printf("Deprecição total: %6.2f", depreciacao_total);
  
  return 0;
}