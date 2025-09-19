#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

  // Área para entrada de dados
    printf("Vamos começar pela primeira carta!\n");

    printf("Qual é o Estado?\n");
    scanf(" %c", &estado1);

    printf("Qual o código da carta?\n");
    scanf("%s", &codigo1);

    printf("Qual o nome da cidade?\n");
    scanf("%s", &cidade1);

    printf("Qual a população?\n");
    scanf("%d", &populacao1);

    printf("Qual a área?\n");
    scanf("%f", &area1);

    printf("Qual o PIB?\n");
    scanf("%f", &pib1);

    printf("Qual o número de pontos turísticos?\n");
    scanf("%d", &pontos1);

    printf("Obrigado! Agora vamos à segunda carta!\n");

    printf("Qual é o Estado?\n");
    scanf(" %c", &estado2);

    printf("Qual o código da carta?\n");
    scanf("%s", &codigo2);

    printf("Qual o nome da cidade?\n");
    scanf("%s", &cidade2);

    printf("Qual a população?\n");
    scanf("%d", &populacao2);

    printf("Qual a área?\n");
    scanf("%f", &area2);

    printf("Qual o PIB?\n");
    scanf("%f", &pib2);

    printf("Qual o número de pontos turísticos?\n");
    scanf("%d", &pontos2);
  // Área para exibição dos dados da cidade
    printf("Aqui estão as respostas:\n");

    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km\n", area1);
    printf("PIB: %.3f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km\n", area2);
    printf("PIB: %.3f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);

return 0;

} 
