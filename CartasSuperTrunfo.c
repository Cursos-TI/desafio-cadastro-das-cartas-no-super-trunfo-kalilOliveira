#include <stdio.h>

//Nivel Mestre

int main(){

    char estado1[50];
    char Codigo1[4];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapita1;
    float superpoder1;

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

    densidadepopulacional1 = (populacao1 + area1) /2;
    pibpercapita1 = (pib1 + populacao1) /2;


    printf("\nCARTA 1:\n");

    printf("Estado: %s \n", estado1);
    
    printf("Código: %s \n", Codigo1);
    
    printf("Nome da Cidade: %s \n", nomecidade1);
    
    printf("População: %d habitantes \n", populacao1);
    
    printf("Área: %.2f km² \n", area1);
    
    printf("PIB: %.2f bilhões de reais \n", pib1);
    
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);

    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional1);

    printf("PIB per capita: %.2f reais \n", pibpercapita1);

    char estado2[50];
    char Codigo2[4];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float superpoder2;

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

    densidadepopulacional2 = (populacao2 + area2) /2;
    pibpercapita2 = (pib2 + populacao2) /2;

    printf("\nCARTA 2:\n");

    printf("Estado: %s \n", estado2);
    
    printf("Código: %s \n", Codigo2);
    
    printf("Nome da Cidade: %s \n", nomecidade2);
    
    printf("População: %d habitantes \n", populacao2);
    
    printf("Área: %.2f km² \n", area2);
    
    printf("PIB: %.2f bilhões de reais \n", pib2);
    
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);

    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional2);

    printf("PIB per capita: %.2f real \n", pibpercapita2);

    // Exibição dos resultados
    printf("\nComparacao de Cartas:\n");

    printf("Populacao: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);

    printf("Area: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);

    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n", pontosturisticos1 > pontosturisticos2 ? 1 : 2, pontosturisticos1 > pontosturisticos2);

    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidadepopulacional1 > densidadepopulacional2 ? 1 : 2, densidadepopulacional1 > densidadepopulacional2);

    printf("PIB per Capita: Carta %d venceu (%d)\n", pibpercapita1 > pibpercapita2 ? 1 : 2, pibpercapita1 > pibpercapita2);

    printf("Super Poder: Carta %d venceu (%d)\n", superpoder1 > superpoder2 ? 1 : 2, superpoder1 > superpoder2);


    return 0;
}