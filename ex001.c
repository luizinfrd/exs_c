//  programa  que  recebe  quatro  números  inteiros,  calcula  e  
//  mostra  a  soma desses números.

#include <stdio.h>

int main(){
    int n1, n2, n3, n4, soma;
    
    printf("Digite quatro números:");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    
    soma = n1 + n2 + n3 + n4;
    
    printf("A soma entre esses números é %d", soma);
    
    return 0;
}