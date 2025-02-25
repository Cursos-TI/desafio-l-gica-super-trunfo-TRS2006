#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    char estado1[5], estado2[5], cod1[5], cod2[5], cidade1[50], cidade2[50], carta1, carta2, opcao;
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2, ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;
    float area1, pib1, area2, pib2, densidade1, densidade2, pib_per_capita1, pib_per_capita2, superP1, superP2;

    // modo novato e aventureiro

    printf("---- SUPER TRUNFO ---- \n");
    printf("Carta 1 \n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo da carta: ");
    scanf(" %s", cod1);
    getchar();

    printf("Nome da cidade: ");
    scanf("%30[^\n]", cidade1);
    getchar();

    printf("População: ");
    scanf(" %d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numeros de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // modo aventureiro - calcular a densidade populacional
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    printf("\n--------------------------\n");

    // Dados a serem exibidos..
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código: %s\n", cod1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Habitantes: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %f reais\n", pib_per_capita1);

    //  Carta 2
    printf("\nCarta 2 \n");

    printf("Estado: ");
    scanf("%s", estado2);
    getchar();

    printf("Codigo da carta: ");
    scanf(" %s", cod2);
    getchar();

    printf("Nome da cidade: ");
    scanf(" %30[^\n]", cidade2);
    getchar();

    printf("População: ");
    scanf(" %d", &populacao2);
    getchar();

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numeros de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // modo aventureiro - calcular a densidade populacional
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    printf("\n--------------------------\n");

    // dados a serem exibidos..
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %s\n", cod2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Habitantes: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %f reais\n", pib_per_capita2);

    // Mestre
    // Somatorio dos atributos
    superP1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);
    superP2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);

    printf("\nComparação de Cartas:\n");

    printf("População: %s (%d)\n", populacao1 > populacao2 ? "Carta 1 venceu" : "Carta 2 venceu", populacao1 > populacao2 ? 1 : 0);
    printf("Área: %s (%d)\n", area1 > area2 ? "Carta 1 venceu" : "Carta 2 venceu", area1 > area2 ? 1 : 0);
    printf("PIB: %s (%d)\n", pib1 > pib2 ? "Carta 1 venceu" : "Carta 2 venceu", pib1 > pib2 ? 1 : 0);
    printf("Pontos Turísticos: %s (%d)\n", pontos_turisticos1 > pontos_turisticos2 ? "Carta 1 venceu" : "Carta 2 venceu", pontos_turisticos2 > pontos_turisticos2 ? 1 : 0);
    printf("Densidade Populacional: %s (%d)\n", densidade1 < densidade2 ? "Carta 1 venceu" : "Carta 2 venceu", densidade1 < densidade2 ? 1 : 0);
    printf("PIB per Capita: %s (%d)\n", pib_per_capita1 > pib_per_capita2 ? "Carta 1 venceu" : "Carta 2 venceu", pib_per_capita1 > pib_per_capita2 ? 1 : 0);
    printf("Super Poder: %s (%d)\n", superP1 > superP2 ? "Carta 1 venceu" : "Carta 2 venceu", superP1 > superP2 ? 1 : 0);

    printf("\n--------------------------\n");

    // 2 tema  - novato

    printf("Comparação de cartas:\n");

    if (populacao1 > populacao2)  {
        printf("População: Carta 1 venceu (%d vs %d)\n", populacao1, populacao2);
    }  else {
        printf("População: Carta 2 venceu (%d vs %d)\n", populacao1, populacao2);
    }

    if (area1 > area2) {
        printf("Área: Carta 1 venceu (%.2f vs %.2f)\n", area1, area2);
    } else {
        printf("Área: Carta 2 venceu (%.2f vs %.2f)\n", area1, area2);
    }

    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (%.2f vs %.2f)\n", pib1, pib2);
    }  else {
        printf("PIB: Carta 2 venceu (%.2f vs %.2f)\n", pib1, pib2);
    }

    if (pontos_turisticos1 > pontos_turisticos2)  {
        printf("Pontos Turísticos: Carta 1 venceu (%d vs %d)\n", pontos_turisticos1, pontos_turisticos2);
    }  else {
        printf("Pontos Turísticos: Carta 2 venceu (%d vs %d)\n", pontos_turisticos1, pontos_turisticos2);
    }

    if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu (%.2f vs %.2f)\n", densidade1, densidade2);
    } else {
        printf("Densidade Populacional: Carta 2 venceu (%.2f vs %.2f)\n", densidade1, densidade2);
    }
 
    if (pib_per_capita1 > pib_per_capita2) {
        printf("PIB per Capita: Carta 1 venceu (%.2f vs %.2f)\n", pib_per_capita1, pib_per_capita2);
    } else {
        printf("PIB per Capita: Carta 2 venceu (%.2f vs %.2f)\n", pib_per_capita1, pib_per_capita2);
    }

    printf("\n--------------------------\n");

    // 2 tema - Nivel Aventureiro

    printf("Escolha um atributo a ser comparado\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        // printf("População");

        printf("%s : %d", cidade1, populacao1);
        printf("%s : %d", cidade2, populacao2);

        if (populacao1 > populacao2)
        {
            printf(" %s | venceu!", cidade1);
        }
        else if (populacao1 < populacao2)
        {
            printf("%s | venceu!", cidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 2:
        printf("%s : %d", cidade1, area1);
        printf("%d : %f", cidade2, area2);

        if (area1 > area2)
        {
            printf("%s | venceu!", cidade1);
        }
        else if (area1 < area2)
        {
            printf("%d | venceu", cidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 3:
        // printf("Atributo: PIB\n");
        printf("%s : %.2f bilhões de reais", cidade1, pib1);
        printf("%s : %.2f bilhões de reais", cidade2, pib2);
        if (pib1 > pib2)
        {
            printf("%s | venceu!", cidade1);
        }
        else if (pib1 < pib2)
        {
            printf("%s | venceu!", cidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 4:
        // printf("Atributo: Pontos Turísticos\n");
        printf("%s : %d", cidade1, pontos_turisticos1);
        printf("%s : %d", cidade2, pontos_turisticos2);
        if (pontos_turisticos1 > pontos_turisticos2)
        {
            printf("%s | venceu!", cidade1);
        }
        else if (pontos_turisticos1 < pontos_turisticos2)
        {
            printf("%s | venceu!", cidade2);
        }
        else
        {
            printf(" Empate!");
        }
        break;

    case 5:
        // printf("Atributo: Densidade Demográfica\n");
        printf("%s : %.2f hab/km²\n", cidade1, densidade1);
        printf("%s : %.2f hab/km²\n", cidade2, densidade2);
        if (densidade1 < densidade2)
        {
            printf("%s | venceu!", cidade1);
        }
        else if (densidade1 > densidade2)
        {
            printf("%s | venceu!", cidade2);
        }
        else
        {
            printf("Empate!");
        }
        break;

    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}
