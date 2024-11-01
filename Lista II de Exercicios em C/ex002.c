// 2. A prefeitura de uma cidade fez uma pesquisa com 200 pessoas, coletando dados sobre o salário e o número de filhos. A prefeitura deseja saber: 
    // • A média do salário dessas pessoas 
    // • A média do número de filhos 
    // • O maior salário 

#include <stdio.h>
#define TAM 200

int main()
{
    int salario, filhos, i, somaSalarial, somaFilhos, maiorSalario, mediaFilhos, mediaSalarial;
    
    mediaFilhos = 0;
    mediaSalarial = 0;
    
    for (i = 0; i < TAM; i++){
        printf("Digite seu salario e o número de filhos: ");
        scanf(" %i %i", &salario, &filhos);
        
        somaSalarial += salario;
        somaFilhos += filhos;
        
        if (salario > maiorSalario){
            maiorSalario = salario;
        }
    }
    
    mediaSalarial = somaSalarial / TAM;
    mediaFilhos = somaFilhos / TAM;
    
   
    
    printf("A media salarial é: %i\n", mediaSalarial);
    printf("A média de filhos é:  %i\n", mediaFilhos);
    printf("O maior sálario é:  %i\n", maiorSalario);
    
    
    
    

    return 0;
}
