/*5. Crie um programa em C que leia um vetor de 30 números inteiros e gere um segundo vetor cujas posições pares são o dobro do vetor original e as ímpares o triplo.*/
#include <stdio.h>
 
int main() {
    int vetor[30], vetorResultado[30];
    for(int i = 0; i < 30; i++) {
        printf("Digite um valor para a posição %i: ", i);
        scanf("%i", &vetor[i]);
        if ((i % 2) == 0) {
            vetorResultado[i] = vetor[i] * 2;
        } else {
            vetorResultado[i] = vetor[i] * 3;
        }
    }
    printf("\nVetor Digitado: ");
    for(int i = 0; i < 30; i++) {
        printf("%i | ", vetor[i]);
    }
    printf("\nVetor Resultado: ");
    for(int i = 0; i < 30; i++) {
        printf("%i | ", vetorResultado[i]);
    }
    printf("\n");
    return 0;
}