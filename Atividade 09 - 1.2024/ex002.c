#include <stdio.h>
#include <stdlib.h>

int main(){
    int cod_func, salario_atual, novo_salario, aumento;
    
    printf("Informe o código do cargo de um funcionário (1 até 5): ");
    scanf("%d", &cod_func);
    
    if(cod_func > 5){
        printf("Este código é inválido!\n");
        exit(0);
    } else{
        printf("Este código é válido! Continue seu programa!\n");
    }
    
    printf("Informe o salário atual desse funcionário: ");
    scanf("%d", &salario_atual);
    
    
    if(cod_func == 1){
        printf("O cargo desse funcionário é Escriturário.\n");
        
        aumento = salario_atual * 0.5;
        novo_salario = salario_atual + aumento;
        
        printf("O valor do aumento é %d reais\n", aumento);
        printf("O novo salário será %d reais\n", novo_salario);

    } else if(cod_func == 2){
        printf("O cargo desse funcionário é Secretário.\n");
        
        aumento = salario_atual * 0.35;
        novo_salario = salario_atual + aumento;
        
        printf("O valor do aumento é %d reais\n", aumento);
        printf("O novo salário será %d reais\n", novo_salario);

    } else if(cod_func == 3){
        printf("O cargo desse funcionário é Caixa.\n");
        
        aumento = salario_atual * 0.2;
        novo_salario = salario_atual + aumento;
        
        printf("O valor do aumento é %d reais\n", aumento);
        printf("O novo salário será %d reais\n", novo_salario);

    } else if(cod_func == 4){
        printf("O cargo desse funcionário é Gerente.\n");
        
        aumento = salario_atual * 0.1;
        novo_salario = salario_atual + aumento;
        
        printf("O valor do aumento é %d reais\n", aumento);
        printf("O novo salário será %d reais\n", novo_salario);
        
    } else if(cod_func == 5){
        printf("O cargo desse funcionário é Diretor.\n");
        
        printf("Este cargo não pode receber aumento de sálario.\n");
    }
    
    
    return 0;
}