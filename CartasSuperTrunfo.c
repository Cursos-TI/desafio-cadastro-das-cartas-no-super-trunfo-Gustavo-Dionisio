#include <stdio.h>

int main() {
    // Título
    printf("Desafio Super Trunfo - Comparação de Cartas\n\n");

    // Declaração das variáveis
    char estado1[50], estado2[50];
    char codigo1[45], codigo2[45];
    char cidade1[40], cidade2[40];

    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Entrada de dados da Carta 1
    printf("---- Carta 1 ----\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Código: ");
    scanf(" %[^\n]", codigo1);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões R$): ");
    scanf("%f", &pib1);

    // Entrada de dados da Carta 2
    printf("\n---- Carta 2 ----\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Código: ");
    scanf(" %[^\n]", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões R$): ");
    scanf("%f", &pib2);

    // Cálculo dos atributos derivados
    densidade1 = (area1 > 0) ? (populacao1 / area1) : 0;
    densidade2 = (area2 > 0) ? (populacao2 / area2) : 0;

    pibPerCapita1 = (populacao1 > 0) ? (pib1 * 1e9) / populacao1 : 0;
    pibPerCapita2 = (populacao2 > 0) ? (pib2 * 1e9) / populacao2 : 0;

    // Troque aqui o atributo a ser comparado:
    // Opções: populacao, area, pib, densidade, pibPerCapita
    // Escolha: POPULAÇÃO (como exemplo)

    printf("\n=== Comparação de Cartas (Atributo: População) ===\n");

    printf("\nCarta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    // Também exibe atributos calculados
    printf("\n--- Atributos Calculados ---\n");
    printf("Carta 1 - Densidade: %.2f hab/km² | PIB per Capita: R$ %.2f\n", densidade1, pibPerCapita1);
    printf("Carta 2 - Densidade: %.2f hab/km² | PIB per Capita: R$ %.2f\n", densidade2, pibPerCapita2);

    return 0;
}
