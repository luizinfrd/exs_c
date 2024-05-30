#include <stdio.h>

int main(){
    int i, numero;
    
    printf("Digite um número para ver sua tabuada:\n");
    scanf("%d", &numero);
    
    for(i = 1; i<=10; i++){
        printf("%d * %d = %d\n", numero, i, numero*i);
    }
    
    return 0;
}