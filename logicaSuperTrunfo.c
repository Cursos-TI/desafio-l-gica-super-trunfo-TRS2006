#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char nome[50];
    char codigo[60], superpoder[60];
    float venc1;
    int pontos_turisticos;
    unsigned int habitantes;
    float area, pib, densidadePopulacional , total, somatorio;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("---- SUPER TRUNFO ---- \n");
    printf("Carta 1 \n");

    printf("Cidade: ");
    scanf("%s", nome); 

    printf("Codigo da carta: "); 
    scanf("%s", codigo); 

    printf("Numeros de pontos turisticos: "); -
    scanf("%d", &pontos_turisticos);

    printf("Habitantes: "); -
    scanf("%d", &habitantes);

    printf("Qual a area (em km²): "); -
    scanf("%f", &area);

    printf("PIB: "); -
    scanf("%f", &pib);

    printf("Super poder: ");
    scanf("%s", &superpoder);

    // Calcula densidade populacional - pib
    densidadePopulacional = habitantes / area;

    total = pib / habitantes;
   somatorio = pontos_turisticos + habitantes + area + pib;
   
    // Dados a serem exibidos..
    printf("Cidade: %s\n", nome);
    printf("Código: %s\n", codigo);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Habitantes: %d \n", habitantes);
    printf("Área: %.2f km² \n", area); 
    printf("PIB: %.2f \n", pib); 
    printf("Densidade populacional: %.2f \n", densidadePopulacional);
    printf("Super poder: %s \n", superpoder);
    printf("Total: %.2f \n", total);
    printf("Somatorio: %f \n", somatorio);

    char nome_[50];
    char codigo_[60], superpoder_[60];
    float venc2;
    int pontos_turisticos_;
    unsigned int habitantes_;
    float area_, pib_, densidadePopulacional_ , total_ , somatorio_ ;

    printf("\nCarta 2 \n");

    printf("Cidade: ");
    scanf("%s", nome_);

    printf("Codigo da carta: ");
    scanf("%s", codigo_); 

    printf("Numeros de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_);

    printf("Habitantes: ");
    scanf("%d", &habitantes_);

    printf("Qual a area (em km²): ");
    scanf("%f", &area_);

    printf("PIB: ");
    scanf("%f", &pib_);

    printf("Super poder: ");
    scanf("%s", &superpoder_);

    // Calcula densidade populacional - pib
    densidadePopulacional_ = habitantes_ / area_;

     total_ = pib_ / habitantes_;

    somatorio_ = pontos_turisticos_ + habitantes_ + area_ + pib_;

    // dados a serem exibidos..
    printf("Cidade 2: %s\n", nome_);
    printf("Código: %s\n", codigo_);
    printf("Pontos turísticos: %d\n", pontos_turisticos_);
    printf("Habitantes: %d \n", habitantes_);
    printf("Área: %.2f km² \n", area_); 
    printf("PIB: %.2f \n", pib_); 
    printf("Densidade populacional: %.2f \n", densidadePopulacional_);
    printf("Super poder: %s \n", superpoder_);
    printf("Total: %.2f \n", total_);
    printf("Somatorio: %f \n", somatorio_);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Novato - lógica básica

    if (somatorio > somatorio_ )
    {
       printf("Cidade: %s é a vencedora! ", nome);
    } else {
        printf("Cidade: %s é a vencedora! ", nome_ );
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
