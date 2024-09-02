#include <stdio.h>

int main(){
    int n, a, b, c;
    
    printf("Digite um número para definir a ordem:\n" 
    "1 - Imprime os próximos valores em ordem crescente\n"
    "2 - Imprime os valores em ordem decrescente\n"
    "3 - Imprime o valor maior no meio\n");
    scanf(" %d", &n);
    
    printf("Digite um valor: ");
    scanf("%d", &a);
    
    printf("Digite um valor: ");
    scanf("%d", &b);
    
    printf("Digite um valor: ");
    scanf("%d", &c);
    
    if(n == 1){
        int aux;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 2 - i; j++){
                if (a > b){
                    aux = a;
                    a = b;
                    b = aux;
                }
                
                if (b > c){
                    aux = b;
                    b = c;
                    c = aux;
                }
            }
        }
        
        printf("Ordem crescente: %d %d %d\n", a, b, c);
    } else if (n == 2) {
        int aux;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 2 - i; j++) {
                if (a < b) {
                    aux = a;
                    a = b;
                    b = aux;
                }
                
                if (b < c) {
                aux = b;
                b = c;
                c = aux;
            }
        }
    }
    printf("Ordem decrescente: %d %d %d\n", a, b, c);
} else if (n == 3) {
    int maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    // Trocando o maior com o valor do meio (assumindo que o meio é b)
    if (maior == a) {
        int aux = a;
        a = b;
        b = aux;
    } else if (maior == c) {
        int aux = c;
        c = b;
        b = aux;
    }
    printf("Maior no meio: %d %d %d\n", a, b, c);
}
    
    
    
    return 0;
}