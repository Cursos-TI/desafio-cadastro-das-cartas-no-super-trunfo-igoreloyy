#include <stdio.h>

    int main() {
        char estado[25], estado2[25];                // Letra de A a H representando os 8 estados
        char codigo_carta[25], codigo_carta2[25];          // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
        char nome_cidade[50], nome_cidade2[50];           // Nome da cidade, exemplo: São Paulo
        int populacao, populacao2;                  // População da cidade, exemplo: 1000000
        float area, area2;                     // Área da cidade em km², exemplo: 1500.50
        float pib, pib2;                      // Produto Interno Bruto da cidade, exemplo: 500000000.00
        int pontos_turisticos, pontos_turisticos2;          // Número de pontos turísticos, exemplo: 10

        printf("Bem-vindo ao jogo Super Trunfo!\n");
        printf("Você irá cadastrar duas cartas, começando pela primeira.\n");


        printf("Digite o estado: \n");
        scanf("%s", &estado);

        printf("Digite o código da carta (ex: A01, B02): \n");
        scanf("%s", &codigo_carta);
        getchar();                      // Limpa o buffer para poder chamar fgets corretamente

        printf("Digite o nome da cidade: \n");
        fgets(nome_cidade, sizeof(nome_cidade), stdin);             // Lê o nome da cidade, incluindo espaços

        printf("Digite a população da cidade: \n");
        scanf("%d", &populacao);

        printf("Digite a área da cidade em km²: \n");
        scanf("%f", &area);

        printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib);

        printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &pontos_turisticos);


        printf("Agora você irá cadastrar a segunda carta.\n");


        printf("Digite o estado: \n");
        scanf("%s", &estado2);

        printf("Digite o código da carta: \n");
        scanf("%s", &codigo_carta2);
        getchar();                      // Limpa o buffer para poder chamar fgets corretamente

        printf("Digite o nome da cidade: \n");
        fgets(nome_cidade2, sizeof(nome_cidade2), stdin);             // Lê o nome da cidade, incluindo espaços

        printf("Digite a população da cidade: \n");
        scanf("%d", &populacao2);

        printf("Digite a área da cidade em km²: \n");
        scanf("%f", &area2);

        printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib2);

        printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &pontos_turisticos2);


        printf("\n\nCarta 1:\n");
        printf("Estado: %s\n", estado);
        printf("Código da carta: %s\n", codigo_carta);
        printf("Nome da cidade: %s", nome_cidade);              // Não possui \n pois fgets já inclui a quebra de linha
        printf("População: %d\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f bilhões de reais\n", pib);
        printf("Pontos turísticos: %d\n", pontos_turisticos);

        printf("\n\nCarta 2:\n");
        printf("Estado: %s\n", estado2);
        printf("Código da carta: %s\n", codigo_carta2);
        printf("Nome da cidade: %s", nome_cidade2);              // Não possui \n pois fgets já inclui a quebra de linha
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Pontos turísticos: %d\n", pontos_turisticos2);

        return 0;
    }
