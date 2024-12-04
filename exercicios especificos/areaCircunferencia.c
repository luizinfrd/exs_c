#include <stdio.h>

float areaCircunferencia(float x){
    return 3.14 * (x * x);
}


int main(){
    float raio;
    
    printf("Digite o raio da circunferencia para calcular sua area: ");
    scanf(" %f", &raio);
    
    printf("A area dessa circunferencia é: %.1f", areaCircunferencia(raio));
    
    return 0;
}