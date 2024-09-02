#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media_final;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media_final = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

    printf("A média final do aluno é: %.2f\n", media_final);

    return 0;
}