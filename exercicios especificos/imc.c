#include <stdio.h>

int main(){

    float peso, altura, imc;

    printf("Digite seu peso e sua altura:");
    scanf("%f %f", &peso, &altura);

    imc = peso / (altura * altura);

    if(imc < 17){
        printf("Seu IMC está muito baixo...");
    } else{
        if(imc >= 17) && (imc < 18.5) {
            printf("Seu IMC está baixo...");
        } else{
            if(imc >= 18.5) && (imc < 24.9) {
                printf("Seu IMC está normal...");
            } else{
                if(imc >= 25) && (imc < 29.9){
                    printf("Seu IMC está acima do normal");
                } else{
                    if(imc >= 30){
                        printf("Seu IMC está muito acima do normal");
                    }
                }
            }
        }
    }    

    return 0;
}