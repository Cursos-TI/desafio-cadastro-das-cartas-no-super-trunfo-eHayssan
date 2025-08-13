#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível mestre - batalha de cartas

int main() {
    
    // Declaração dos Atributos das Cartas:
    char letraEstado, letraEstado2;
    char codigoCarta[4], codigoCarta2[4]; // 3 dígitos + caractere nulo
    char nomeCidade[50], nomeCidade2[50]; // 49 caracteres + caractere nulo
    unsigned long populacao, populacao2;
    float area, area2;
    double pib, pib2;
    int numPontosTuristicos, numPontosTuristicos2;
           
    // Cadastro das Cartas:
    printf("========================================\n");
    printf("Cadastro da carta 1\n");

    printf("Insira a letra correspondente ao estado: ");
    scanf("%c", &letraEstado);

    printf("Insira o código da carta: ");
    scanf("%s", codigoCarta);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade); // Lê até o final da linha, permitindo espaços no nome da cidade    
    
    printf("Insira a população da cidade: ");
    scanf("%lu", &populacao);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &area);
    
    printf("Insira o PIB da cidade (em bilhões): ");
    scanf("%lf", &pib);
    
    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &numPontosTuristicos);

    // Densidade populacional
    float densidadePopulacional = (float)populacao / area;
    
    // PIB per capita
    float pibPerCapita = (float)pib*1000000000 / (float)populacao;

    printf("========================================\n");
    printf("Cadastro da carta 2\n");

    printf("Insira a letra correspondente ao estado: ");
    // O espaço antes de %c para consumir os carateres em branco deixado pelo enter /n anterior
    scanf(" %c", &letraEstado2); 

    printf("Insira o código da carta: ");
    scanf("%s", codigoCarta2);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2); // Lê até o final da linha, permitindo espaços no nome da cidade

    printf("Insira a população da cidade: ");
    scanf("%lu", &populacao2);
    
    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &area2);
    
    printf("Insira o PIB da cidade (em bilhões): ");
    scanf("%lf", &pib2);
    
    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &numPontosTuristicos2);

    // Densidade populacional 
    float densidadePopulacional2 = (float)populacao2 / area2;
    
    // PIB per capita
    float pibPerCapita2 = (float)pib2*1000000000 / (float)populacao2;
    
    //Super poder: soma dos atributos numéricos (população, área, PIB e número de pontos turísticos, 
    //PIB per capita e o inverso da densidade populacional - quanto menor a densidade, maior o poder)
    float superPoder = populacao + area + pib + (float)numPontosTuristicos + pibPerCapita + (1.0/densidadePopulacional);
    float superPoder2 = populacao2 + area2 + pib2 + (float)numPontosTuristicos2 + pibPerCapita2 + (1.0/densidadePopulacional2); 

    // Exibição dos Dados das Cartas
    printf("========================================\n");
    printf("CARTA 1\n");
    printf("Estado: %c\n", letraEstado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);
    printf("Super Poder Carta 1: %f\n", superPoder);

    printf("========================================\n");
    printf("CARTA 2\n");
    printf("Estado: %c\n", letraEstado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder Carta 2: %f\n", superPoder2);

    // Comparação dos atributos das cartas
    printf("========================================\n");
    printf("Comparação de Cartas:\n");
    printf("População: Carta %s venceu (%d) \n", ((populacao > populacao2) ? codigoCarta : codigoCarta2),(populacao > populacao2));
    printf("Área: Carta %s venceu (%d) \n", ((area > area2) ? codigoCarta : codigoCarta2), (area > area2));
    printf("PIB: Carta %s venceu (%d) \n", ((pib > pib2) ? codigoCarta : codigoCarta2), (pib > pib2));
    printf("Pontos Turísticos: Carta %s venceu (%d) \n", ((numPontosTuristicos > numPontosTuristicos2) ? codigoCarta : codigoCarta2), (numPontosTuristicos > numPontosTuristicos2));
    printf("Densidade Populacional: Carta %s venceu (%d) \n", ((densidadePopulacional < densidadePopulacional2) ? codigoCarta : codigoCarta2), (densidadePopulacional < densidadePopulacional2));
    printf("PIB per Capita: Carta %s venceu (%d) \n", ((pibPerCapita > pibPerCapita2) ? codigoCarta : codigoCarta2), (pibPerCapita > pibPerCapita2));
    printf("Super Poder: Carta %s venceu (%d) \n", ((superPoder > superPoder2) ? codigoCarta : codigoCarta2), (superPoder > superPoder2));

    return 0;
}