/*4. Faça um programa em C (com a estrutura do...while) que leia 20 valores inteiros e:  
 
– Encontre e mostre o maior valor;  
 
– Encontre e mostre o menor valor;  
 
– Calcule e mostre a média dos números lidos; */

#include <stdio.h>
 
int main(){

    int i = 0, vetor[20], menor, maior, media;
 
    do{

        printf("Insira o %i°Valor: ", (i+1));

        scanf("%i", &vetor[i]);


        media+=vetor[i];

         if (i == 0) {

            menor = vetor[i];

            maior = vetor[i];

        } else {

            if (vetor[i] > maior) {

                maior = vetor[i];

            }

            if (vetor[i] < menor) {

                menor = vetor[i];

            }

        }

        i++;

    }while(i < 20);

    printf("\nMaior valor: %i", maior);

    printf("\nMenor valor: %i", menor);

    printf("\nMedia dos valores: %i", (media/20));
 
    return 0;

}

 