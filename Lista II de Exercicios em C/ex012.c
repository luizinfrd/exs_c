/* 12. Faça uma função que recebe por parâmetro o raio de uma esfera 
e calcula o seu volume (v = 4/3.P .R3). */
 
#include <stdio.h>
 
float calcula(float raio)
{
    float volume = (4 / 3) * 3.14 * raio * raio * raio;
    return volume;
}
 
int main()
{
    float raio, volume;
 
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
 
    volume = calcula(raio);
 
    printf("O volume da esfera é: %.2f\n", volume);
 
    return 0;
}