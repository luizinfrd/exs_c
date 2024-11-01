// 1. Faça um programa em C que mostre a tabuada de qualquer número escolhido pelo usuário (considerar tabuada do número 1 ao 10).  

#include <stdio.h>

int main()
{
    int numero, i;
    
    printf("Digite um número para ver sua tabuada: ");
    scanf(" %i", &numero);
    
    for (i = 1; i <= 10; i++){
        int conta = numero * i; 
        
        printf("%i x %i: %i\n", numero, i, conta);
    }

    return 0;
}
