#include <stdio.h>

int main() {
    float horas_trabalhadas, valor_hora, salario_normal, valor_hora_extra, salario_total;

    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &horas_trabalhadas);

    printf("Digite o valor da hora trabalhada: R$ ");
    scanf("%f", &valor_hora);

    salario_normal = 40 * 4 * valor_hora;

    if (horas_trabalhadas > 40 * 4) {
        float horas_extras = horas_trabalhadas - 40 * 4;
        valor_hora_extra = valor_hora * 1.5;
        salario_total = salario_normal + (horas_extras * valor_hora_extra);
    } else {
        salario_total = salario_normal;
    }

    printf("O salário total do funcionário é: R$ %.2f\n", salario_total);

    return 0;
}