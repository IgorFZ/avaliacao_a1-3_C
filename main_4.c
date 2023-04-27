#include <stdio.h>

int main() {
  int n100, n50, n20, n10, n5, n2;
  int m1, m50, m25, m10, m05, m01;
  double valor = 0, valor_total = 0;
  int quantidade = 0, quantidade_total = 0;
  char option;

  do {
    // informe a quantidade de produtos
    do {
      printf("\nInforme a quantidade de produtos: ");
      scanf(" %i", &quantidade);
      if (quantidade > 0) {
        // pede o valor e armazena as informações necessarias
        printf("Informe o valor desses produtos: ");
        scanf(" %lf", &valor);
        quantidade_total = quantidade_total + quantidade;
        valor_total = valor_total + valor;
      }
    } while (quantidade > 0);
    
    if (valor_total > 0) {
      // calcula o valor em reais e centavos
      int notas = valor_total;
      int moedas = (valor_total - notas) * 100;

      // mostra a média
      printf("\nQuantidade Total de Produtos: %i", quantidade_total);
      printf("\nValor Total dos Produtos: %.2lf", valor_total);
      printf("\nValor Médio dos Produtos: %.2lf", valor_total/quantidade_total);
      
      printf("\nValor Total dos Produtos é %i reais e %i centavos", notas, moedas);
      
      // calcula e mostra as notas e moedas necessárias
      if( (moedas * 1000) % 10 == 9) {
        moedas++;
      }
      
      n100 = notas/100;
      notas = notas%100;
      n50 = notas/50;
      notas = notas%50;
      n20 = notas/20;
      notas = notas%20;
      n10 = notas/10;
      notas = notas%10;
      n5 = notas/5;
      notas = notas%5;
      n2 = notas/2;
      notas = notas%2;
      
      m1 = notas/1;
      notas = notas%1;
      m50 = moedas/50;
      moedas = moedas%50;
      m25 = moedas/25;
      moedas = moedas%25;
      m10 = moedas/10;
      moedas = moedas%10;
      m05 = moedas/5;
      moedas = moedas%5;
      m01 = moedas/1;
      
      printf("\n\nNOTAS:\n");
      
      printf("%d nota(s) de R$ 100.00\n", n100);
      printf("%d nota(s) de R$ 50.00\n", n50);
      printf("%d nota(s) de R$ 20.00\n", n20);
      printf("%d nota(s) de R$ 10.00\n", n10);
      printf("%d nota(s) de R$ 5.00\n", n5);
      printf("%d nota(s) de R$ 2.00\n", n2);
      
      printf("MOEDAS:\n");
      
      printf("%d moeda(s) de R$ 1.00\n", m1);
      printf("%d moeda(s) de R$ 0.50\n", m50);
      printf("%d moeda(s) de R$ 0.25\n", m25);
      printf("%d moeda(s) de R$ 0.10\n", m10);
      printf("%d moeda(s) de R$ 0.05\n", m05);
      printf("%d moeda(s) de R$ 0.01\n", m01);
    }

    // verifica se o usuario quer rodar o programa novamente
    if (valor_total > 0) {
      printf("\n\nRepetir o programa? \n(S - SIM / N - NÃO):");
      scanf(" %c", &option);
  
      if (option != 'S') {
        valor_total = -1;
      }
    }
    
  } while (valor_total > 0);

  return 0;
}
