#include <stdio.h>

int main(void) {
  int num_conta = 0, digito_verificador = 0;
  int digitos[4], digitos_soma[4], produtos[4];
  int aux = 0, index = 3, soma, soma_produtos = 0;

  int tres = 0, tres_invertido = 0, verificador = 0;

  do {
    printf("Número da Conta(apenas 4 dígitos): ");
    scanf("%i", &num_conta);
  } while (num_conta < 1000 || num_conta > 9999);
  
  // armazena os numeros em ordem dentro de um array
  while (aux < 4) {
    digitos[index] = num_conta%10;
    num_conta = num_conta/10;
    index--;
    aux++;
  }

  // pega os tres primeiros digitos 
  index = 2;
  aux = 1;
  while (index >= 0) {
    tres = tres + (digitos[index] * aux);
    aux = aux * 10;
    index--;
  }

  // pega os tres primeiros digitos invertidos
  index = 0;
  aux = 1;
  while (index < 3) {
    tres_invertido = tres_invertido + (digitos[index] * aux);
    aux = aux * 10;
    index++;
  }

  // somando os tres primeiros digitos com os tres primeiros digitos invertidos
  soma = tres + tres_invertido;

  // armazena os digitos da soma em ordem dentro de um array
  aux = 0, index = 3;
  while (aux < 4) {
    digitos_soma[index] = soma%10;
    soma = soma/10;
    index--;
    aux++;
  }

  // multiplica cada digito da soma pela sua posicao e retorna a soma entre eles
  index = 0;
  while (index < 4) {
    produtos[index] = digitos_soma[index] * index;
    soma_produtos = soma_produtos + produtos[index];
    index++;
  }

  // pegando o numero verificador obtido pelos calculos
  verificador = soma_produtos%10;

  // verificando se o digito verificador está correto
  if (verificador == digitos[3]) {
    printf("\nNúmero da Conta Correto!");
  } else {
    printf("\nNúmero da Conta Inválido!");
  }
  
  return 0;
}
