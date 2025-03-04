#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    char estado1[5], estado2[5], cod1[5], cod2[5], cidade1[50], cidade2[50];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2, opcao;
    float area1, pib1, area2, pib2, densidade1, densidade2, pib_per_capita1, pib_per_capita2;

    printf("---- SUPER TRUNFO ---- \n");
    printf("Carta 1 \n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo da carta: ");
    scanf("%s", cod1);
    getchar();

    printf("Nome da cidade: ");
    scanf("%30[^\n]", cidade1);
    getchar();

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numeros de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Calcular densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    printf("\n--------------------------\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código: %s\n", cod1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);

    printf("\nCarta 2 \n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo da carta: ");
    scanf("%s", cod2);
    getchar();

    printf("Nome da cidade: ");
    scanf("%30[^\n]", cidade2);
    getchar();

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numeros de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Calcular densidade populacional e PIB per capita
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    printf("\n--------------------------\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %s\n", cod2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);

    printf("\nComparação de Cartas:\n");

    printf("População: %s venceu (%d vs %d)\n", 
        populacao1 > populacao2 ? "Carta 1" : "Carta 2",
        populacao1, populacao2);

    printf("Área: %s venceu (%.2f vs %.2f)\n", 
        area1 > area2 ? "Carta 1" : "Carta 2", 
        area1, area2);

    printf("PIB: %s venceu (%.2f vs %.2f)\n", 
        pib1 > pib2 ? "Carta 1" : "Carta 2", 
        pib1, pib2);

    printf("Pontos Turísticos: %s venceu (%d vs %d)\n", 
        pontos_turisticos1 > pontos_turisticos2 ? "Carta 1" : "Carta 2", 
        pontos_turisticos1, pontos_turisticos2);

    printf("Densidade Populacional: %s venceu (%.2f vs %.2f)\n", 
        densidade1 < densidade2 ? "Carta 1" : "Carta 2", 
        densidade1, densidade2);

    // Modo aventureiro
    printf("\nEscolha um atributo a ser comparado\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("%s: %d\n%s: %d\n", cidade1, populacao1, cidade2, populacao2);
            printf("%s venceu!\n", populacao1 > populacao2 ? cidade1 : (populacao1 < populacao2 ? cidade2 : "Empate"));
            break;
        case 2:
            printf("%s: %.2f km²\n%s: %.2f km²\n", cidade1, area1, cidade2, area2);
            printf("%s venceu!\n", area1 > area2 ? cidade1 : (area1 < area2 ? cidade2 : "Empate"));
            break;
        case 3:
            printf("%s: %.2f bilhões de reais\n%s: %.2f bilhões de reais\n", cidade1, pib1, cidade2, pib2);
            printf("%s venceu!\n", pib1 > pib2 ? cidade1 : (pib1 < pib2 ? cidade2 : "Empate"));
            break;
        case 4:
            printf("%s: %d pontos turísticos\n%s: %d pontos turísticos\n", cidade1, pontos_turisticos1, cidade2, pontos_turisticos2);
            printf("%s venceu!\n", pontos_turisticos1 > pontos_turisticos2 ? cidade1 : (pontos_turisticos1 < pontos_turisticos2 ? cidade2 : "Empate"));
            break;
        case 5:
            printf("%s: %.2f hab/km²\n%s: %.2f hab/km²\n", cidade1, densidade1, cidade2, densidade2);
            printf("%s venceu!\n", densidade1 < densidade2 ? cidade1 : (densidade1 > densidade2 ? cidade2 : "Empate"));
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
