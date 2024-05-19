#include <stdio.h>

void main() {
  int x, y, z;

  printf("Digite o valor do lado x: ");
  scanf("%d", &x);

  printf("Digite o valor do lado y: ");
  scanf("%d", &y);

  printf("Digite o valor do lado z: ");
  scanf("%d", &z);

  if (x + y > z && x + z > y && y + z > x) {
    if (x == y && y == z) {
      printf("O triângulo é equilátero.\n");
    } else if (x == y || y == z || z == x) {
      printf("O triângulo é isósceles.\n");
    } else {
      printf("O triângulo é escaleno.\n");
    }
  } else {
    printf("Os valores não formam um triângulo.\n");
  }
}
