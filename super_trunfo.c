#include <stdio.h>

int main(){

// Aluno: Andre Seidi Tsukide - Trabalho Super Trunfo

// DEFINIÇÃO DE VARIÁVEIS
    char estado_1, estado_2;
    char codigo_1_1[3], cidade_1_1[20], codigo_2_2[3], cidade_2_2[20];
    int ptos_tur_1_1, ptos_tur_2_2;
    unsigned long int populacao_1_1, populacao_2_2;
    float area_1_1, PIB_1_1, area_2_2, PIB_2_2, densid_pop_1, pib_percapita_1, densid_pop_2, pib_percapita_2;
    float superpoder1, superpoder2, inv_densid_1, inv_densid_2;

// SAUDAÇÃO DE BOAS VINDAS AO JOGO
    printf("Olá, bem vindo ao jogo Super trunfo do curso de Análise de Sistemas Estácio - 1° Semestre 2025!\n");
    printf("Precisamos começar cadastrando os dados das cartas do jogo.\n\n");

// CAPTURA DE VARIÁVEIS DA CARTA 1
    printf("DADOS DA CARTA 1:\n\n");
    printf("Defina uma letra para o estado entre A e H:\n");
    scanf(" %c", &estado_1);
    printf("Informe o código da carta:\n");
    scanf(" %s", codigo_1_1);
    printf("Informe o nome da cidade:\n");
    scanf(" %s", cidade_1_1);
    printf("informe o número de habitantes:\n");
    scanf(" %lu", &populacao_1_1);
    printf("Informe a área em km²:\n");
    scanf(" %f", &area_1_1);
    printf("Informe o PIB em bilhões de reais:\n");
    scanf(" %f", &PIB_1_1);
    printf("Informe quantos pontos turísticos a cidade tem:\n");
    scanf(" %d", &ptos_tur_1_1);

    densid_pop_1 = populacao_1_1 / area_1_1;
    pib_percapita_1 = (PIB_1_1 * 1000000000) / populacao_1_1;
    inv_densid_1 = 1/densid_pop_1;
    superpoder1 = (float)populacao_1_1 + area_1_1 + PIB_1_1 + (float)ptos_tur_1_1 + pib_percapita_1 + inv_densid_1;

// IMPRESSÃO DOS DADOS DA CARTA 1
    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1_1);
    printf("Nome da cidade: %s\n", cidade_1_1);
    printf("População: %lu\n", populacao_1_1);
    printf("Área: %.2f km²\n", area_1_1);
    printf("PIB: R$ %.2f bilhões\n", PIB_1_1);
    printf("Número de pontos turísticos: %d\n", ptos_tur_1_1);
    printf("Densidade populacional: %.2f hab/km²\n", densid_pop_1);
    printf("Pib per capita: %.2f R$/hab\n", pib_percapita_1);
    printf("Super poder: %.6f\n", superpoder1);

// CAPTURA DE VARIÁVEIS DA CARTA 2
    printf("\nCARTA 2\n\n");
    printf("Defina uma letra para o estado entre A e H: \n");
    scanf(" %c", &estado_2);
    printf("Informe o código da carta:\n");
    scanf(" %s", codigo_2_2);
    printf("Informe o nome da cidade:\n");
    scanf(" %s", cidade_2_2);
    printf("informe o número de habitantes:\n");
    scanf(" %lu", &populacao_2_2);
    printf("Informe a área em km²:\n");
    scanf(" %f", &area_2_2);
    printf("Informe o PIB em bilhões de reais:\n");
    scanf(" %f", &PIB_2_2);
    printf("Informe quantos pontos turísticos a cidade tem:\n");
    scanf(" %d", &ptos_tur_2_2);

    densid_pop_2 = populacao_2_2 / area_2_2;
    pib_percapita_2 = (PIB_2_2 * 1000000000) / populacao_2_2;
    inv_densid_2 = 1/densid_pop_2;
    superpoder2 = (float)populacao_2_2 + area_2_2 + PIB_2_2 + (float)ptos_tur_2_2 + pib_percapita_2 + inv_densid_2;

// IMPRESSÃO DOS DADOS DA CARTA 2
    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2_2);
    printf("Nome da cidade: %s\n", cidade_2_2);
    printf("População: %lu\n", populacao_2_2);
    printf("Área: %.2f km²\n", area_2_2);
    printf("PIB: R$ %.2f bilhões\n", PIB_2_2);
    printf("Número de pontos turísticos: %d\n", ptos_tur_2_2);
    printf("Densidade populacional: %.2f hab/km²\n", densid_pop_2);
    printf("Pib per capita: %.2f R$/hab\n", pib_percapita_2);
    printf("Super poder: %.6f\n\n", superpoder2);

// COMPARANDO AS CARTAS

    printf("PARÂMETROS PARA COMPARAÇÃO DE CARTAS\n");
    printf("Se RESULTADO = 1: Carta 1 Vence\n");
    printf("Se RESULTADO = 0: Carta 2 Vence\n\n");

    printf("População: CARTA 1 (%lu) versus CARTA 2 (%lu) - RESULTADO = %d\n", populacao_1_1, populacao_2_2, populacao_1_1 > populacao_2_2);
    printf("Área: CARTA 1 (%.2f) versus CARTA 2 (%.2f) - RESULTADO = %d\n", area_1_1, area_2_2, area_1_1 > area_2_2);
    printf("PIB: CARTA 1 (%.2f) versus CARTA 2 (%.2f) - RESULTADO = %d\n", PIB_1_1, PIB_2_2, PIB_1_1 > PIB_2_2);
    printf("Pontos turísticos: CARTA 1 (%d) versus CARTA 2 (%d) - RESULTADO = %d\n", ptos_tur_1_1, ptos_tur_2_2, ptos_tur_1_1 > ptos_tur_2_2);
    printf("Densidade populacional: CARTA 1 (%.2f) versus CARTA 2 (%.2f) - RESULTADO = %d\n", densid_pop_1, densid_pop_2, densid_pop_1 < densid_pop_2);
    printf("PIB per capita: CARTA 1 (%.2f) versus CARTA 2 (%.2f) - RESULTADO = %d\n", pib_percapita_1, pib_percapita_2, pib_percapita_1 > pib_percapita_2);
    printf("Super poder: CARTA 1 (%.6f) versus CARTA 2 (%.6f) - RESULTADO = %d\n\n", superpoder1, superpoder2, superpoder1 > superpoder2);

// MENSAGEM DE ENCERRAMENTO
    printf("FIM DE JOGO!\n");
    printf("ATÉ A PRÓXIMA PARTIDA!\n");

return 0;

}