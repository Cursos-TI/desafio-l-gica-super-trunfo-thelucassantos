#include <stdio.h>

int main() {

    // Declaração de variáveis
    //Carta 1
    char estado1[] = "Rio de Janeiro";
    char codigo1[] = "A01";
    char cidade1[] = "Rio de Janeiro";
    int populacao1 = 6718903;
    float area1 = 1200.329;
    double pib1 = 452000000000.0;
    int pontosTuristicos1 = 10;
    float densidadePopulacional1;
    float pibPerCapita1;

    // Carta 2
    char estado2[] = "São Paulo";
    char codigo2[] = "A02";
    char cidade2[] = "São Paulo";
    int populacao2 = 11300000;
    float area2 = 1521.11;
    double pib2 = 699000000000.0;
    int pontosTuristicos2 = 12;
    float densidadePopulacional2;
    float pibPerCapita2;

    // Cálculo de densidade populacional e PIB per capita:
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;

    // Comparação de Cartas:
    printf("Rio de Janeiro x São Paulo\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n"); 
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");

    int escolha;
    printf("Insira sua resposta (1-6): ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            if (populacao1 > populacao2) {
                printf("População do Rio de Janeiro: %d, população de São Paulo: %d\n", populacao1, populacao2);
                printf("A cidade vencedora é: %s com população %d\n", cidade1, populacao1);
            } else if (populacao2 > populacao1) {
                printf("População do Rio de Janeiro: %d, população de São Paulo: %d\n", populacao1, populacao2);
                printf("A cidade vencedora é: %s com população %d\n", cidade2, populacao2);
            } else {
                printf("População do Rio de Janeiro: %d, população de São Paulo: %d\n", populacao1, populacao2);
                printf("Empate na população: %d\n", populacao1);
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("Área do Rio de Janeiro: %.2f, área de São Paulo: %.2f\n", area1, area2);
                printf("A cidade vencedora é: %s com área %.2f\n", cidade1, area1);
            } else if (area2 > area1) {
                printf("Área do Rio de Janeiro: %.2f, área de São Paulo: %.2f\n", area1, area2);
                printf("A cidade vencedora é: %s com área %.2f\n", cidade2, area2);
            } else {
                printf("Área do Rio de Janeiro: %.2f, área de São Paulo: %.2f\n", area1, area2);
                printf("Empate na área: %.2f\n", area1);
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf("PIB do Rio de Janeiro: %.2f, PIB de São Paulo: %.2f\n", pib1, pib2);
                printf("A cidade vencedora é: %s com PIB %.2f\n", cidade1, pib1);
            } else if (pib2 > pib1) {
                printf("PIB do Rio de Janeiro: %.2f, PIB de São Paulo: %.2f\n", pib1, pib2);
                printf("A cidade vencedora é: %s com PIB %.2f\n", cidade2, pib2);
            } else {
                printf("PIB do Rio de Janeiro: %.2f, PIB de São Paulo: %.2f\n", pib1, pib2);
                printf("Empate no PIB: %.2f\n", pib1);
            }
            break;
        case 4:
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("A Pontos turísticos do Rio de Janeiro: %d, Pontos turísticos de São Paulo: %d\n", pontosTuristicos1, pontosTuristicos2);
                printf("A cidade vencedora é: %s com pontos turísticos %d\n", cidade1, pontosTuristicos1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("A Pontos turísticos do Rio de Janeiro: %d, Pontos turísticos de São Paulo: %d\n", pontosTuristicos1, pontosTuristicos2);
                printf("A cidade vencedora é: %s com pontos turísticos %d\n", cidade2, pontosTuristicos2);
            } else {
                printf("A Pontos turísticos do Rio de Janeiro: %d, Pontos turísticos de São Paulo: %d\n", pontosTuristicos1, pontosTuristicos2);
                printf("Empate nos pontos turísticos: %d\n", pontosTuristicos1);
            }
            break;
        case 5:
            if (densidadePopulacional1 > densidadePopulacional2) {
                printf("A densidade populacional do Rio de Janeiro: %.2f, densidade populacional de São Paulo: %.2f\n", densidadePopulacional1, densidadePopulacional2);
                printf("A cidade vencedora é: %s com densidade populacional %.2f\n", cidade1, densidadePopulacional1);
            } else if (densidadePopulacional2 > densidadePopulacional1) {
                printf("A densidade populacional do Rio de Janeiro: %.2f, densidade populacional de São Paulo: %.2f\n", densidadePopulacional1, densidadePopulacional2);
                printf("A cidade vencedora é: %s com densidade populacional %.2f\n", cidade2, densidadePopulacional2);
            } else {
                printf("A densidade populacional do Rio de Janeiro: %.2f, densidade populacional de São Paulo: %.2f\n", densidadePopulacional1, densidadePopulacional2);
                printf("Empate na densidade populacional: %.2f\n", densidadePopulacional1);
            }
            break;
        case 6:
            if (pibPerCapita1 > pibPerCapita2) {
                printf("Pib per capita do Rio de Janeiro: %.2f, PIB per capita de São Paulo: %.2f\n", pibPerCapita1, pibPerCapita2);
                printf("A cidade vencedora é: %s com PIB per capita %.2f\n", cidade1, pibPerCapita1);
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("Pib per capita do Rio de Janeiro: %.2f, PIB per capita de São Paulo: %.2f\n", pibPerCapita1, pibPerCapita2);
                printf("A cidade vencedora é: %s com PIB per capita %.2f\n", cidade2, pibPerCapita2);
            } else {
                printf("Pib per capita do Rio de Janeiro: %.2f, PIB per capita de São Paulo: %.2f\n", pibPerCapita1, pibPerCapita2);
                printf("Empate no PIB per capita: %.2f\n", pibPerCapita1);
            }
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}