/* 7. Faça um algoritmo que construa uma matriz de nome MAT de 10 linhas e 15 colunas contendo números inteiros.
Em seguida escreva a soma dos elementos de cada linha e se a soma dos elementos é par ou impar. 
Por fim escreva a soma dos elementos de cada coluna e se a soma dos elementos é par ou impar. */
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main() {
    int mat[10][15], somalinha[10], somacoluna[15];
    srand(time(NULL)); // gerador de números aleatórios - para não repetir
 
    printf("MATRIZ\n\n");
    for (int i = 0; i < 10; i++) { // linhas
        for (int j = 0; j < 15; j++) { // colunas
            mat[i][j] = rand() % 100; // armazena o valor aleatório na matriz
            printf("|%d| ", mat[i][j]); // exibe o valor
        }
        printf("\n"); 
    }
    for (int i = 0; i < 10; i++) {
        somalinha[i] = 0; // soma da linha
        for (int j = 0; j < 15; j++) {
            somalinha[i] += mat[i][j]; // soma os elementos da linha
        }
    }
    for (int j = 0; j < 15; j++) {
        somacoluna[j] = 0; // soma da coluna
        for (int i = 0; i < 10; i++) {
            somacoluna[j] += mat[i][j]; // soma os elementos da coluna
        }
    }
 
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("Soma da linha %d: %d - %s\n", i, somalinha[i], (somalinha[i] % 2 == 0) ? "par" : "ímpar"); // condição ? valor_se_verdadeiro : valor_se_falso;
    }
    printf("\n");
 
    for (int j = 0; j < 15; j++) {
        printf("Soma da coluna %d: %d - %s\n", j, somacoluna[j], (somacoluna[j] % 2 == 0) ? "par" : "ímpar");
    }
    return 0;
}