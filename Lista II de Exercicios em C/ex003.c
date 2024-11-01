// 3. A série de Fibonacci é formada pela seguinte sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, etc. Escreva um algoritmo que gere a série de Fibonacci até o vigésimo termo. 

#include <stdio.h>

int main()
{
    int a, b, i, aux;
    
    a = 0;
    b = 1;
    
    for (i = 0; i < 20; i++){
        aux = a + b;
        a = b;
        b = aux;
        
        printf(" %i\n", aux);
    }

    return 0;
}
