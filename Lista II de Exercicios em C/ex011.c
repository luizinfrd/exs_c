/* 11. Faça uma função que recebe a média final de um aluno por parãmetro e retorna o seu 
conceito. */
 
#include <stdio.h>
 
 
void conceitoAluno(float mediaFinal){
    if (mediaFinal <= 4.9){
        printf("O conceito desse aluno é: D");
    } else if (mediaFinal >= 5.0 && mediaFinal <= 6.9){
        printf("O conceito desse aluno é: C");
    } else if (mediaFinal >= 7.0 && mediaFinal <= 8.9){
        printf("O conceito desse aluno é: B");
    } else{
        printf("O conceito desse aluno é: A");
    }
}
 
 
int main() {
    float mediaFinal;
    printf("Digite a média final de um aluno para descobrir seu conceito: ");
    scanf(" %f", &mediaFinal);
    conceitoAluno(mediaFinal);
 
    return 0;
}