/*9. Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma equação do segundo grau e retorne o valor do delta, que é dado por 'b² - 4ac'*/
#include <stdio.h>
#include <math.h>
 
float calcDelta(float a, float b, float c) {
    float delta;
    delta = (b*b) - (4*a*c);
    return delta;
}
 
int main() {
    int a, b, c;
 
    printf("Digite o valor de A: ");
    scanf("%d", &a);
 
    printf("\nDigite o valor de B: ");
    scanf("%d", &b);
    printf("\nDigite o valor de C: ");
    scanf("%d", &c);
    printf("\nO valor de delta é obtido por: b² - 4.a.c\n");
    printf("Delta = %.2f",calcDelta(a, b, c));
    return 0;
}