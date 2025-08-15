#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo - Nível Mestre\n\n");

    // Dados das duas cartas
    char Estado1[50], Estado2[50];
    char Codigo1[45], Codigo2[45];
    char Cidade1[40], Cidade2[40];

    float area1, area2;
    float pib1, pib2;
    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Entrada de dados para Carta 1
    printf("---- Carta 1 ----\n");
    printf("Digite o Estado: ");
    scanf(" %[^\n]", Estado1);
    printf("Digite o Código: ");
    scanf(" %[^\n]", Codigo1);
    printf("Digite a Cidade: ");
    scanf(" %[^\n]", Cidade1);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite a População: ");
    scanf("%lu", &populacao1);
    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados para Carta 2
    printf("\n---- Carta 2 ----\n");
    printf("Digite o Estado: ");
    scanf(" %[^\n]", Estado2);
    printf("Digite o Código: ");
    scanf(" %[^\n]", Codigo2);
    printf("Digite a Cidade: ");
    scanf(" %[^\n]", Cidade2);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite a População: ");
    scanf("%lu", &populacao2);
    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo dos atributos derivados
    densidade1 = (area1 > 0) ? (populacao1 / area1) : 0;
    densidade2 = (area2 > 0) ? (populacao2 / area2) : 0;

    pibPerCapita1 = (populacao1 > 0) ? (pib1 * 1e9) / populacao1 : 0;
    pibPerCapita2 = (populacao2 > 0) ? (pib2 * 1e9) / populacao2 : 0;

    // Cálculo do Super Poder (com densidade invertida!)
    superPoder1 = pontosTuristicos1 + pib1 + pibPerCapita1 + ((densidade1 > 0) ? (1.0 / densidade1) : 0);
    superPoder2 = pontosTuristicos2 + pib2 + pibPerCapita2 + ((densidade2 > 0) ? (1.0 / densidade2) : 0);

    // Exibição dos atributos
    printf("\n=== Atributos das Cartas ===\n");

    printf("\nCarta 1: %s - %s\n", Estado1, Cidade1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2: %s - %s\n", Estado2, Cidade2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações (1 = Carta 1 vence, 0 = Carta 2 vence)
    printf("\n=== Comparação dos Atributos ===\n");

    int resultado;

    resultado = (pontosTuristicos1 > pontosTuristicos2);
    printf("Pontos Turísticos: %d - %s\n", resultado, resultado ? "Carta 1 venceu" : "Carta 2 venceu");

    resultado = (pib1 > pib2);
    printf("PIB: %d - %s\n", resultado, resultado ? "Carta 1 venceu" : "Carta 2 venceu");

    resultado = (pibPerCapita1 > pibPerCapita2);
    printf("PIB per Capita: %d - %s\n", resultado, resultado ? "Carta 1 venceu" : "Carta 2 venceu");

    resultado = (densidade1 < densidade2); // menor vence
    printf("Densidade Populacional: %d - %s\n", resultado, resultado ? "Carta 1 venceu" : "Carta 2 venceu");

    resultado = (superPoder1 > superPoder2);
    printf("Super Poder: %d - %s\n", resultado, resultado ? "Carta 1 venceu" : "Carta 2 venceu");

    return 0;
}