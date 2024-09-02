#include <stdio.h>

int main() {
    float litros, valor_total, desconto;
    char tipo_combustivel;

    printf("Digite a quantidade de litros: ");
    scanf("%f", &litros);

    printf("Digite o tipo de combustivel (A-alcool, G-gasolina): ");
    scanf(" %c", &tipo_combustivel);

    if (tipo_combustivel == 'A') {
        if (litros <= 20) {
            desconto = 0.03;
        } else {
            desconto = 0.05;
        }
        valor_total = litros * 3.39 * (1 - desconto);
    } else if (tipo_combustivel == 'G') {
        if (litros <= 20) {
            desconto = 0.04;
        } else {
            desconto = 0.06;
        }
        valor_total = litros * 5.39 * (1 - desconto);
    } else {
        printf("Tipo de combustivel invalido.\n");
        return 1;
    }

    printf("O valor a ser pago é: R$ %.2f\n", valor_total);

    return 0;
}