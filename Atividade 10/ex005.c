#include <stdio.h>

int main() {
  int idade, i, soma_idade, media_idade;
  float peso, soma_peso, media_peso;
  
  printf("Digite as idades dos jogadores de um time de basquete.\n");
  
  for(i=1; i<=5; i++){
      printf("Digite a idade do %dº jogador do time:\n", i);
      scanf("%d", &idade);
      
      soma_idade+=idade;
      media_idade = soma_idade/5;
  }
  
  printf("Agora digite os pesos dos jogadores.\n");
  
  for(i=1; i<=5; i++){
      printf("Digite o peso do %dº jogador do time:\n", i);
      scanf("%f", &peso);
      
      soma_peso+=peso;
      media_peso = soma_peso/5;
  }
  
  
  printf("A média das idades é %d anos\n", media_idade);
  printf("A média dos pesos é %.2f kilos\n", media_peso);

  return 0;
}