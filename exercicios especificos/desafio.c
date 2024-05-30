#include <stdio.h>

int main(){
    
    float custo_espetaculo, preco_convite, calculo_espetaculo, lucro;
    
    printf("Digite o custo do espetáculo:");
    scanf("%f",&custo_espetaculo);

    printf("Digite o preço do convite:");
    scanf("%f",&preco_convite);

    calculo_espetaculo = custo_espetaculo / preco_convite;
    lucro = (custo_espetaculo * 1.5) / preco_convite;
    
    printf("A quantidade necessária de convites necessários para chegar no custo do espetáculo é %f", calculo_espetaculo \n);
    printf("A quantidade de convites necessários para lucrar é %f", lucro);
    
    
    
    return 0;
}