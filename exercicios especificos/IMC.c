#include <stdio.h>

void calculoIMC(float x, float y){
    float IMC = x / (y * y);
    
    if (IMC < 18.5){
        printf("VOCÊ ESTÁ ABAIXO DO PESO!");
    } else if(IMC >= 18.5 && IMC <= 24.9){
        printf("VOCÊ ESTÁ NO PESO NORMAL!");
    } else if(IMC >= 25 && IMC <= 29.9){
        printf("VOCÊ ESTÁ ACIMA DO PESO!");
    } else if(IMC >= 30 && IMC <= 34.9){
        printf("VOCÊ ESTÁ COM OBESIDADE!");
    } else if(IMC >= 35 && IMC <= 39.9){
        printf("VOCÊ ESTÁ COM OBESIDADE SEVERA!");
    } else{
        printf("VOCÊ ESTÁ COM OBESIDADE MÓRBIDA!");
    }
}

int main(){
    float peso, altura;
    
    printf("Digite seu peso e sua altura para calcular seu IMC: ");
    scanf("%f %f", &peso, &altura);
    
    calculoIMC(peso, altura);
    
    return 0;
}