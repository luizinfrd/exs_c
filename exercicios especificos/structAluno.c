#include <stdio.h>

struct Aluno{
  char Nome[50];
  int RA;
  char Endereco[50];
  int Telefone;
  char Email[50];
  int Celular;
  char Curso[50];
};

int main(){
    struct Aluno luizinho;
    
    printf("DIGITE AS INFORMAÇÕES PARA CADASTRAR UM ALUNO. \n");
    
    printf("Digite o nome do aluno: ");
    fgets(luizinho.Nome, sizeof(luizinho.Nome), stdin);
    
    printf("Digite o RA do aluno: ");
    scanf("%i", &luizinho.RA);
    getchar();
    
    printf("Digite o endereço do aluno: ");
    fgets(luizinho.Endereco, sizeof(luizinho.Endereco), stdin);
    
    printf("Digite o telefone do aluno: ");
    scanf(" %i", &luizinho.Telefone);
    getchar();
    
    printf("Digite o email do aluno: ");
    fgets(luizinho.Email, sizeof(luizinho.Email), stdin);
    
    printf("Digite o celular do aluno: ");
    scanf("%i", &luizinho.Celular);
    getchar();
    
    printf("Digite o curso do aluno: ");
    fgets(luizinho.Curso, sizeof(luizinho.Curso), stdin);
    
    printf("\n");
    
    printf("Nome do aluno: %s\n", luizinho.Nome);
    printf("RA do aluno: %i\n", luizinho.RA);
    printf("Endereco do aluno: %s\n", luizinho.Endereco);
    printf("Telefone do aluno: %i\n", luizinho.Telefone);
    printf("Email do aluno: %s\n", luizinho.Email);
    printf("Celular do aluno: %i\n", luizinho.Celular);
    printf("Curso do aluno: %s\n", luizinho.Curso);
    

    return 0;
}
