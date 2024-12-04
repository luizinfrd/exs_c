#include <stdio.h>

int somar(int a, int b){
    return a + b;
}

int subtrair(int a, int b){
    return a - b;
}

int multiplicar(int a, int b){
    return a * b;
}
int dividir(int a, int b){
    return a / b;
}

int main(){
    int n1, n2;
    
    printf("Digite dois números para realizar os calculos básicos: ");
    scanf("%d %d", &n1, &n2);
    
    printf("Soma: %d\n", somar(n1, n2));
    printf("Subtração: %d\n", subtrair(n1, n2));
    printf("Multiplicação: %d\n", multiplicar(n1, n2));
    printf("Divisão: %d\n", dividir(n1, n2));
    
    
    return 0;
}