/* 8. Fazer um algoritmo que leia os valores de duas matrizes 3×3 e imprima a mutiplicação das
duas matrizes. */
 
#include <stdio.h>
 
int main() {
    int matrizA[3][3], matrizB[3][3], resultadoMultiplicacao[3][3];
    int i, j, k;
 
    printf("Digite os valores da matriz A:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }
 
    printf("Digite os valores da matriz B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }
 
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            resultadoMultiplicacao[i][j] = 0;
            for (k = 0; k < 3; k++) {
                resultadoMultiplicacao[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
 
    printf("O resultado da multiplicação é:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", resultadoMultiplicacao[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}