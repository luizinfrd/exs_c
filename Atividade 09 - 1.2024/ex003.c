#include <stdio.h>

int main(){
    int salario_inicial, novo_salario, bonificacao, auxilio_escola;
    
    printf("Digite o salário de um funcionário: ");
    scanf("%d", &salario_inicial);
    
    if(salario_inicial <= 500){
        bonificacao = salario_inicial * 0.05;
    } else if(salario_inicial > 500 && salario_inicial <=1200){
        bonificacao = salario_inicial * 0.12;
    } else{
        bonificacao = 0;
    }
    
    if(salario_inicial <= 600){
        auxilio_escola = 150;
    } else{
        auxilio_escola = 100;
    }
    
    novo_salario = salario_inicial + bonificacao + auxilio_escola;
    printf("O novo salário com bonificação e auxilio escola é: %d", novo_salario);
    
    
    return 0;
}