// um programa que recebe o salário de um funcionário, 
// calcula e mostra o novo salário, sabendo-se que este sofreu um 
// aumento de 25%.

#include <stdio.h>

int main(){
    float salario, novo_salario;
    
    printf("Digite o salário de um funcionário da empresa: ");
    scanf("%f", &salario);
    
    novo_salario = salario * 1.25;
    
    printf("Com o aumento de 25%, o salário desse funcionário será: %f", novo_salario);
    
    return 0;
}