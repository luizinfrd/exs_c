// um programa que recebe o salário de um funcionário e o 
// percentual de aumento, calcula e mostra o valor do aumento e o 
// novo salário.

#include <stdio.h>

int main(){
    float salario, percentual_aumento, valor, conversao_percentual, novo_salario;;
    
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    
    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentual_aumento);
    
    conversao_percentual = percentual_aumento / 100;
    
    valor = salario * conversao_percentual;
    
    novo_salario = salario + valor; 
    
    printf("O salario com o percentual de aumento é %.2f", novo_salario);
    
    return 0;
}