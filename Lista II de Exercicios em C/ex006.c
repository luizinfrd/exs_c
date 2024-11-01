/*6. Construa um programa em C que permita informar dados para 2 vetores inteiros de 20 posições e apresente o conjunto de união dos vetores. 
Lembrando que conjunto de união são todos os elementos que existem em ambos os vetores, mas sem repetição (cada número pode aparecer uma única vez no resultado).*/
#include <stdio.h>
 
int existe(int vetor[], int tamanho, int elemento) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == elemento) {
            return 1;
        }
    }
    return 0; 
}
 
int main(){
    int vetor1[5], vetor2[5], uniao[10], tamanhoUniao = 0;
    for(int i = 0; i < 5; i++){
        printf("Insira os valores do 1°Vetor na posição %i: ",i+1);
        scanf("%i", &vetor1[i]);
    }
    printf("\n");
    for(int i = 0; i < 5; i++){
        printf("Insira os valores do 2°Vetor na posição %i: ",i+1);
        scanf("%i", &vetor2[i]);
    }
    printf("\nVetor1: ");
    for (int i = 0; i < 5; i++) {
        if (!existe(uniao, tamanhoUniao, vetor1[i])) {
            uniao[tamanhoUniao] = vetor1[i];
            tamanhoUniao++;
        }
        printf("| %i |", vetor1[i]);
    }
    printf("\nVetor2: ");
    for (int i = 0; i < 5; i++) {
        if (!existe(uniao, tamanhoUniao, vetor2[i])) {
            uniao[tamanhoUniao] = vetor2[i];
            tamanhoUniao++;
        }
        printf("| %i |", vetor2[i]);
    }
 
    printf("\nUnião dos vetores: ");
    for (int i = 0; i < tamanhoUniao; i++) {
        printf("| %i |", uniao[i]);
    }
    return 0;
}