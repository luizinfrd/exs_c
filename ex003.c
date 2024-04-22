//  programa que recebe três notas e seus respectivos pesos, calcula
//  e mostra a média ponderada.

#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    int peso1, peso2, peso3;
    
    printf("Digite as três notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    printf("Digite os três pesos: ");
    scanf("%d %d %d", &peso1, &peso2, &peso3);
    
    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
    
    printf("A media aritmética dessas notas são: %f", media);
    
    return 0;
}