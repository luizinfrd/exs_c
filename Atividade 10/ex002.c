#include <stdio.h>

int main(){
    int numero;
    
    printf("Digite um número de 1 até 9:\n");
    scanf("%d", &numero);
    
    switch(numero){
        case 1:
            printf("*");
            break;
        case 2:
            printf("**");
            break;
        case 3:
            printf("***");
            break;
        case 4:
            printf("****");
            break;
        case 5:
            printf("*****");
            break;
        case 6:
            printf("******");
            break;
        case 7:
            printf("*******");
            break;
        case 8:
            printf("********");
            break;
        case 9:
            printf("*********");
            break;
    }
    
    return 0;
}