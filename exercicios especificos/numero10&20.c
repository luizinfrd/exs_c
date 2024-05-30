#include <stdio.h>

int main(){
    int numero;

    printf("Digite um número entre 10 e 20:");
    scanf("%d", &numero);

    if((numero >= 10) && (numero <= 20)){
        printf("O valor é válido\n");
    } else{
        if(numero < 10){
            printf("O valor é menor que 10\n");
        } else{
            printf("O valor é maior que 20\n");
        }
    }

    return 0;
}
