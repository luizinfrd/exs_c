#include <stdio.h>

struct DVD{
    char Artista[50];
    char nomeAlbum[50];
    char estiloMusical[50];
    char Gravadora[50];
    int Ano;
    float Preco;
};


int main(){
    struct DVD dvd1;
    
    printf("\n Digite as informações para cadastrar um DVD!\n");
    
    printf("Digite o nome do artista: ");
    fgets(dvd1.Artista, sizeof(dvd1.Artista), stdin);
    
    printf("Digite o nome do album: ");
    fgets(dvd1.nomeAlbum, sizeof(dvd1.nomeAlbum), stdin);
    
    printf("Digite o estilo musical: ");
    fgets(dvd1.estiloMusical, sizeof(dvd1.estiloMusical), stdin);
    
    printf("Digite o nome da gravadora: ");
    fgets(dvd1.Gravadora, sizeof(dvd1.Gravadora), stdin);
    
    printf("Digite o ano de lançamento: ");
    scanf(" %i", &dvd1.Ano);
    
    printf("Digite o preço: ");
    scanf(" %f", &dvd1.Preco);
    
    printf("\n");
    
    printf("Artista: %s", dvd1.Artista);
    printf("Nome do album: %s", dvd1.nomeAlbum);
    printf("Estilo Musical: %s", dvd1.estiloMusical);
    printf("Gravadora: %s", dvd1.Gravadora);
    printf("Ano: %i\n", dvd1.Ano);
    printf("Preco: %f", dvd1.Preco);

    return 0;
}
