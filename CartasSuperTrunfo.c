#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Declaração dos Atributos das Cartas:
    char letraEstado;
    char codigoCarta[10]; // 3 dígitos + caractere nulo
    char nomeCidade[50];
    int populacao;
    float area;
    double pib;
    int numPontosTuristicos;
    
       
    // Cadastro das Cartas:
    printf("Insira a letra correspondente ao estado: ");
    scanf("%c", &letraEstado);

    printf("Insira o código da carta: ");
    scanf("%s", codigoCarta);
   
    printf("Insira o nome da cidade: ");
    scanf(" "); // Limpa o buffer do teclado
    fgets(nomeCidade, 50, stdin); // Permitir nomes com espaços
    nomeCidade[strcspn(nomeCidade, "\n")] = 0; // Remove o newline do fgets

    printf("Insira a população da cidade: ");
    scanf("%d", &populacao);
    
    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &area);
    
    printf("Insira o PIB da cidade (em bilhões): ");
    scanf("%lf", &pib);
    
    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &numPontosTuristicos);
    
    // Exibição dos Dados das Cartas
    printf("Estado: %c\n", letraEstado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos);

    return 0;
}