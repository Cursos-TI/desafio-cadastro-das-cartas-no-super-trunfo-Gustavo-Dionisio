#include <stdio.h>

int main() {
    // Título
    printf("Desafio Super Trunfo - Comparação de Cartas com Menu\n\n");

    // Declaração das variáveis
    char estado1[50], estado2[50];
    char codigo1[45], codigo2[45];
    char cidade1[40], cidade2[40];

    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    int escolha;

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

    // Menu de escolha
    printf("\n=== Escolha o atributo para comparação ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional (menor vence)\n");
    printf("5 - PIB per Capita\n");
    printf("Digite a opção: ");
    scanf("%d", &escolha);

    printf("\n=== Comparação de Cartas ===\n");

    // Comparação com base na escolha
    switch (escolha) {
        case 1:
            printf("\nAtributo: População\n");
            printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);
            if (populacao1 > populacao2)
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("\nResultado: Empate!\n");
            break;

        case 2:
            printf("\nAtributo: Área\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);
            if (area1 > area2)
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (area2 > area1)
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("\nResultado: Empate!\n");
            break;

        case 3:
            printf("\nAtributo: PIB\n");
            printf("Carta 1 - %s (%s): R$ %.2f bilhões\n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): R$ %.2f bilhões\n", cidade2, estado2, pib2);
            if (pib1 > pib2)
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (pib2 > pib1)
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("\nResultado: Empate!\n");
            break;

        case 4:
            printf("\nAtributo: Densidade Populacional (menor vence)\n");
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, densidade2);
            if (densidade1 < densidade2)
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (densidade2 < densidade1)
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("\nResultado: Empate!\n");
            break;

        case 5:
            printf("\nAtributo: PIB per Capita\n");
            printf("Carta 1 - %s (%s): R$ %.2f\n", cidade1, estado1, pibPerCapita1);
            printf("Carta 2 - %s (%s): R$ %.2f\n", cidade2, estado2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2)
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("\nResultado: Empate!\n");
            break;

        default:
            printf("\nOpção inválida! Encerrando...\n");
    }

    return 0;
}

