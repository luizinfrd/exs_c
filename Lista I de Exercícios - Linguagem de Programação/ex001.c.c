#include <stdio.h>

int main(){
    float altura, peso_ideal;
    char sexo;
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    printf("Para defnir seu sexo, digite M para masculino e F para feminino:  ");
    scanf(" %c", &sexo);
    
    if (sexo == 'M'){
        peso_ideal = (72.7 * altura) - 58;
        printf("O seu peso ideal seria: %.2f", peso_ideal);
    } else if (sexo == 'F'){
        peso_ideal = (62.1 * altura) - 44.7;
        printf("O seu peso ideal seria: %.2f", peso_ideal);
    } else{
        printf("SEXO INVÁLIDO! REINICIE O PROGRAMA!");
    }
    
    
    
    
    
    return 0;
}