/*10. Faça um procedimento que recebe a idade de um nadador por parâmetro e retorna , também por parâmetro, a categoria desse nadador de acordo com a tabela abaixo:*/
#include <stdio.h>
#include <string.h>
 
void categoria(int idade, char *resposta) {
    if (idade >= 5 && idade <= 7) {
        strcpy(resposta, "Infantil A");
    } else if (idade >= 8 && idade <= 10) {
        strcpy(resposta, "Infantil B");
    } else if (idade >= 11 && idade <= 13) {
        strcpy(resposta, "Juvenil A");
    } else if (idade >= 14 && idade <= 17) {
        strcpy(resposta, "Juvenil B");
    } else if (idade >= 18) {
        strcpy(resposta, "Adulto");
    } else {
        strcpy(resposta, "Não atende aos requisitos!");
    }
}
 
int main() {
    int idade;
    char resposta[40];
 
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
 
    categoria(idade, resposta);
    printf("Categoria: %s\n", resposta);
 
    return 0;
}