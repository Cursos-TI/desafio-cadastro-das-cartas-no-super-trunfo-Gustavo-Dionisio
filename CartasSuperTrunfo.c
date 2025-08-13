#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf ("Desafio Super Trunfo \n");
    int PontosTuristico, populacao;
    float area, pib; 
    char Estado [50];
    char Codigo [50];
    char Cidade [50];

    printf ("Digite Estado: \n "); 
    scanf ( "%s", &Estado);

    printf ("Digite Codigo:  \n");
    scanf ("%s", &Codigo);

    printf ("Digite a Cidade: \n");
    scanf ("%s", &Cidade);

    printf("Digite áerea:  \n");
    scanf ("%f", &area);
    
    printf("Digite o PIB: \n");
    scanf ("%f", &pib);

     printf("Digite a populacao: \n");
    scanf ("%d", &populacao);

      printf("Digite a PontosTuristico: \n");
    scanf ("%d", &PontosTuristico);


    printf("Nome do Estado: %s", Estado);
    printf("Codigo: %s", Codigo);
    printf("Nome da Cidade: %s",  Cidade);
    printf("áerea: %f",-  area);
    printf("PIB: %f",-  pib) ;
    printf("População: %d",-  populacao);
    printf("Numero de PontosTuristico: %d",-  PontosTuristico);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
