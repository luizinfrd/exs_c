#include <stdio.h>

int main() {
    float salario_atual, aumento, novo_salario;

    printf("Digite o salário atual do funcionário: R$ ");
    scanf("%f", &salario_atual);

    aumento = salario_atual * 0.25;
    novo_salario = salario_atual + aumento;

    printf("O novo salário do funcionário será: R$ %.2f\n", novo_salario);

    return 0;
}