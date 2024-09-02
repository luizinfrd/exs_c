#include <stdio.h>

int main() {
    int ano_nascimento, ano_atual, idade_anos, idade_meses, idade_dias, idade_semanas;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    idade_anos = ano_atual - ano_nascimento;

    float parte_fracionaria = (float)(ano_atual - ano_nascimento) - idade_anos;

    idade_meses = (int)(parte_fracionaria * 12);
    idade_dias = (int)((parte_fracionaria * 12 - idade_meses) * 30);
    idade_semanas = idade_dias / 7;

    printf("A idade da pessoa é:\n");
    printf("%d anos\n", idade_anos);
    printf("%d meses\n", idade_meses);
    printf("%d dias\n", idade_dias);
    printf("%d semanas\n", idade_semanas);

    return 0;
}