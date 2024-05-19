#include <stdio.h>

int main(){
    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    if(numero % 2 == 0){
        printf("Esse número é par!");
    } else{
        printf("Esse número é impar!");
    }
    
    
    return 0;
}