#include <stdio.h>

int main() {

    //Carta 1
    char estado1;
    char codigo1[4], cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    //Carta 2
    char estado2;
    char codigo2[4], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    

    // -- Cadastro da Carta 1 --
    printf("\n--- Cadastro da Carta 1 ---\n");

    printf("Estado (A-H): \n");
    scanf(" %c", &estado1);

    printf("Código: (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);


    // -- Cadastro da Carta 2 -- 
    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Estado (A-H): \n");
    scanf(" %c", &estado2);

    printf("Código: (ex: B02): \n");
    scanf("%s", codigo2);

    printf("Nome da Cidade: \n");
    scanf("%s", cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);


    // --- Exibição das Cartas ---
    printf("\n\n--- Informacoes das Cartas ---\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;


   

}
