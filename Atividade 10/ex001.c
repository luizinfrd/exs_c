#include <stdio.h>

int main(){
    int i;
    float produtos, soma;
    
    printf("Digite o valor dos 10 produtos selecionados.\n");
    
    for(i = 1; i<=10; i++){
        printf("Digite o valor do %dº produto:", i);
        scanf("%f", &produtos);
        
        soma += produtos;
    }
    
    printf("A soma dos produtos é %.2f\n", soma);
    
    
    
    
    return 0;
}