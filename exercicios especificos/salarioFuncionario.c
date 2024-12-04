#include <stdio.h>

int salarioFuncionario(int x, int y, int z){
    return (x * y) * z;
}

int main(){
    int hora, valorHora, dias;
    
    printf("Digite as horas trabalhadas e os dias trabalhados: ");
    scanf(" %i %i", &hora, &dias);
    
    
    printf("Agora digite o valor das horas trabalhadas: ");
    scanf(" %i", &valorHora);
    
    printf("O sálario desse funcionário será: %i", salarioFuncionario(hora, valorHora, dias));
    
    
    
    return 0;
}