#include <stdio.h>

int fatorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * fatorial(n - 1);
  }
}

int main() {
  int numero, resultado;

  printf("Digite um número: ");
  scanf("%d", &numero);

  if (numero < 0) {
    printf("Erro: Fatorial não definido para números negativos!\n");
  } else {
    resultado = fatorial(numero);
    printf("O fatorial de %d é: %d\n", numero, resultado);
  }

  return 0;
}

