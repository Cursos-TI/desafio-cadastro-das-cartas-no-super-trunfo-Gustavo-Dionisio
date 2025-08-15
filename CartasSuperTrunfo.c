#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo - Nível Aventureiro\n");

    int PontosTuristico, populacao;
    float area, pib;
    char Estado[50];
    char Codigo[45];
    char Cidade[40];

    // Novos atributos
    float densidadePopulacional, pibPerCapita;

    // Entrada de dados
    printf("Digite o Estado: ");
    scanf("%s", Estado);

    printf("Digite o Código: ");
    scanf("%s", Codigo);

    printf("Digite a Cidade: ");
    scanf("%s", Cidade);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite a População: ");
    scanf("%d", &populacao);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontosTuristico);

    // Cálculos
    densidadePopulacional = (area > 0) ? (populacao / area) : 0;
    pibPerCapita = (populacao > 0) ? (pib * 1000000000) / populacao : 0;  // Convertendo PIB para reais

    // Saída dos dados
    printf("\n--- Dados Cadastrados ---\n");
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("População: %d habitantes\n", populacao);
    printf("Pontos Turísticos: %d\n", PontosTuristico);

    // Exibindo os novos atributos
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita);

    return 0;
}