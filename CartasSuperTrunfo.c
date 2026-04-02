#include <stdio.h>

int main() {

    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pibPerCapita1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pibPerCapita2;

    // ===== Entrada Carta 1 =====
    printf("=== Carta 1 ===\n");
    scanf(" %c", &estado1);
    scanf("%s", codigo1);
    scanf(" %[^\n]", cidade1);
    scanf("%d", &populacao1);
    scanf("%f", &area1);
    scanf("%f", &pib1);
    scanf("%d", &pontos1);

    // ===== Entrada Carta 2 =====
    printf("=== Carta 2 ===\n");
    scanf(" %c", &estado2);
    scanf("%s", codigo2);
    scanf(" %[^\n]", cidade2);
    scanf("%d", &populacao2);
    scanf("%f", &area2);
    scanf("%f", &pib2);
    scanf("%d", &pontos2);

    // ===== Cálculos =====
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // ===== Saída =====
    printf("\n=== Carta 1 ===\n");
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

    printf("\n=== Carta 2 ===\n");
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    return 0;
}