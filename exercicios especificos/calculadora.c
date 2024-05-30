#include <stdio.h>

int main(){
    char operador;
    float n1, n2, resultado;

    printf("Digite o sinal para determinar a operação que será realizada:");
    scanf("%c",&operador);

    printf("Digite dois números:");
    scanf("%f %f",&n1,&n2);

    switch(operador){
        case '+':
            resultado = n1 + n2;
            printf("A soma desses números é %f", resultado);
            break;
        case '-':
            resultado = n1 - n2;
            printf("A subtração desses números é %f", resultado);
            break;
        case '*':
            resultado = n1 * n2;
            printf("A multiplicação desses números é %f", resultado);
            break;
        case '/':
            if(n2 != 0){
                resultado = n1 / n2;
                printf("A divisao desses números é %f", resultado);
            } else{
                printf("Erro! Divisão por zero!");
            } 
            break;
        default:
            printf("Operador inválido!");
            break;   
    }

    return 0;
}