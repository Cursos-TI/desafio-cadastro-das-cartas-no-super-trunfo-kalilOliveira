#include <stdio.h>

int main(){

    char estado1[50];
    char Codigo1[4];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    printf ("Estado: \n");
    scanf (" %s", &estado1);

    printf ("Codigo: \n");
    scanf ("%s", &Codigo1);

    printf ("Nome da Cidade: \n");
    scanf ("%s", &nomecidade1);

    printf ("população: \n");
    scanf ("%d", &populacao1);

    printf ("area: \n");
    scanf ("%f", &area1);

    printf ("PIB: \n");
    scanf ("%f", &pib1);

    printf ("Numeros de Pontos Turisticos: \n");
    scanf ("%d", &pontosturisticos1);

    printf("\nCARTA 1:\n");

    printf("Estado: %s \n", estado1);
    
    printf("Código: %s \n", Codigo1);
    
    printf("Nome da Cidade: %s \n", nomecidade1);
    
    printf("População: %d habitantes \n", populacao1);
    
    printf("Área: %.2f km² \n", area1);
    
    printf("PIB: %.2f bilhões de reais \n", pib1);
    
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);

    char estado2[50];
    char Codigo2[4];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    printf ("\nEstado: \n");
    scanf (" %s", &estado2);

    printf ("Codigo: \n");
    scanf ("%s", &Codigo2);

    printf ("Nome da Cidade: \n");
    scanf ("%s", &nomecidade2);

    printf ("população: \n");
    scanf ("%d", &populacao2);

    printf ("area: \n");
    scanf ("%f", &area2);

    printf ("PIB: \n");
    scanf ("%f", &pib2);

    printf ("Numeros de Pontos Turisticos: \n");
    scanf ("%d", &pontosturisticos2);

    printf("\nCARTA 2:\n");

    printf("Estado: %s \n", estado2);
    
    printf("Código: %s \n", Codigo2);
    
    printf("Nome da Cidade: %s \n", nomecidade2);
    
    printf("População: %d habitantes \n", populacao2);
    
    printf("Área: %.2f km² \n", area2);
    
    printf("PIB: %.2f bilhões de reais \n", pib2);
    
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);

    return 0;
}
