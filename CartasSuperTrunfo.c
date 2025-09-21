#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float ppc1, ppc2;
    float superpoder1, superpoder2;
    int resultadopopulacao, resultadoarea, resultadopib, resultadopontos, resultadodensidade, resultadoppc, resultadosuperpoder;

  // Área para entrada de dados
    printf("Vamos começar pela primeira carta!\n");

    printf("Qual é o Estado?\n");
    scanf(" %c", &estado1);

    printf("Qual o código da carta?\n");
    scanf(" %s", codigo1);

    printf("Qual o nome da cidade?\n");
    scanf(" %s", cidade1);

    printf("Qual a população?\n");
    scanf("%lu", &populacao1);

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
    scanf(" %s", codigo2);

    printf("Qual o nome da cidade?\n");
    scanf(" %s", cidade2);

    printf("Qual a população?\n");
    scanf("%lu", &populacao2);

    printf("Qual a área?\n");
    scanf("%f", &area2);

    printf("Qual o PIB?\n");
    scanf("%f", &pib2);

    printf("Qual o número de pontos turísticos?\n");
    scanf("%d", &pontos2);

  // Área para cálculo de densidade e PIB per capita:
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    ppc1 = (pib1 * 1000000000) / (float)populacao1;
    ppc2 = (pib2 * 1000000000) / (float)populacao2;

  // Área para cálculo do Super Poder:
    superpoder1 = (float)populacao1 + area1 + pib1 + pontos1 + ppc1 + (1.0f / densidade1);
    superpoder2 = (float)populacao2 + area2 + pib2 + pontos2 + ppc2 + (1.0f / densidade2);

  // Área para cálculo de comparações:
    resultadopopulacao = populacao1 > populacao2;
    resultadoarea = area1 > area2;
    resultadopib = pib1 > pib2;
    resultadopontos = pontos1 > pontos2;
    resultadodensidade = densidade1 < densidade2;
    resultadoppc = ppc1 > ppc2;
    resultadosuperpoder = superpoder1 > superpoder2;

  // Área para exibição dos dados da cidade
    printf("Aqui estão as respostas das cartas:\n");

    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", ppc1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", ppc2);
    printf("Super Poder: %.2f\n", superpoder2);

  // Área para comparações e resultados:
    printf("Comparação de Cartas e Resultado:\n");

    printf("População: Carta 1 venceu (%d)\n", resultadopopulacao);
    printf("Área: Carta 1 venceu (%d)\n", resultadoarea);
    printf("PIB: Carta 1 venceu (%d)\n", resultadopib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadopontos);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultadodensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadoppc);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultadosuperpoder);

    printf("Obrigado pela partida!\n");

  return 0;

}
