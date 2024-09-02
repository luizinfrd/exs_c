#include <stdio.h>

int main() {
    int numero_conta;
    float saldo, debito, credito, saldo_atual;

    printf("Digite o número da conta: ");
    scanf("%d", &numero_conta);

    printf("Digite o saldo inicial: R$ ");
    scanf("%f", &saldo);

    printf("Digite o valor total de débitos: R$ ");
    scanf("%f", &debito);

    printf("Digite o valor total de créditos: R$ ");
    scanf("%f", &credito);

    saldo_atual = (saldo - debito) + credito;

    printf("\nSaldo da conta %d:\n", numero_conta);
    printf("Saldo atual: R$ %.2f\n", saldo_atual);

    if (saldo_atual >= 0) {
        printf("Saldo Positivo\n");
    } else {
        printf("Saldo Negativo\n");
    }

    return 0;
}