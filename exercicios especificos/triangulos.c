#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite três valores para verificar se é um triângulo: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a < b + c) && (b < a + c) && (c < a + b)) {
        printf("Estes valores formam um triângulo!\n");
        if ((a == b) && (b == c)) {
            printf("É um triângulo equilátero!\n");
        } else {
            if ((a == b) || (a == c) || (b == c)) {
                printf("É um triângulo isósceles!\n");
            } else {
                printf("É um triângulo escaleno!\n");
            }
        }
    } else {
        printf("Estes valores não formam um triângulo!\n");
    }

    return 0;
}
