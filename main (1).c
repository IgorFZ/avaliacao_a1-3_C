#include <stdio.h>

int main(void) {
  char categoria;
  float quantidade = 0, soma = 0, total = 0.0; // garante q a média seja float e corrige o problema de execução
  float media = 0;

  do {
    printf("\nInforme a Categoria: ");
    scanf(" %c", &categoria);

    // verifica se a categoria é valida para pedir a quantidade
    if (categoria == 'A' || categoria == 'B' || categoria == 'C') {
      // verifica se a qauntidade é maior que zero
      do {
        printf("Informe a Quantidade: ");
        scanf(" %f", &quantidade);
      } while (quantidade <= 0);

      // com a soma e a média dentro do if e dps do while, não tem como ocorrer uma divisão por zero
      soma = soma + quantidade;
      total++;
  
      // corrige o calculo da média
      media = soma / total;
    }
    
  } while (categoria == 'A' || categoria == 'B' || categoria == 'C'); // 

  printf("\nA media dos produtos eh %.2f", media);

  return 0;
}

/*
Inicialmente, a função acima pede ao usuário uma categoria do tipo ‘char’ e uma ‘quantidade’ do tipo ‘float’, 
após isso, soma a variável ‘soma’ a ‘quantidade’. Depois, soma +1 a variável ‘total’ e calcula a média dividindo 
a soma pela ultima quantidade inserida. Se a categoria for igual a ‘A’ ou ‘B’ ele repetirá o processo pulando 
o pedido de categoria ao usuário, caso contrário mostrará na tela a média. Porém o código não compila, pois 
as variáveis quantidade, soma e total são declaradas como int e usadas como float.
*/
