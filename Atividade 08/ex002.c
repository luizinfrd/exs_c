// programa que recebe três notas, calcula e mostra a 
// média aritmética.

#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    
    printf("Digite as três notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    
    printf("A media aritmética dessas notas são: %f", media);
    
    return 0;
}

