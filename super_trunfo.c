#include <stdio.h>

int main() {
    char estado1;
    char codigo1[4];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    printf ("Estado: \n");
    scanf (" %c", &estado1);

    printf ("Codigo: \n");
    scanf ("%s", &codigo1[4]);

    printf ("Nome da Cidade: \n");
    scanf ("%s", &nomecidade1[50]);

    printf ("população: \n");
    scanf ("%d", &populacao1);

    printf ("area: \n");
    scanf ("%f", &area1);

    printf ("PIB: \n");
    scanf ("%f", &pib1);

    printf ("Numeros de Pontos Turisticos: \n");
    scanf ("%d", &pontosturisticos1);

    printf("\nDados cadastrados:\n");
    printf("Estado: %c - Código: %s\n", estado1, codigo1);
    printf("Nome da Cidade: %s - População: %d\n", nomecidade1, populacao1);
    printf("Área: %.2f km² - PIB: %.2f bilhões de reais\n", area1, pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    return 0;
}