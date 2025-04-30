#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//nivel AVENTUREIRO (TEMA 2)

int main(){

    int escolhajogador;
    srand(time(0));

    printf("****JOGO SUPER TRUFO****\n");
    printf("Escolha uma opção:\n");
    printf("1. JOGAR\n");
    printf("2. REGRAS\n");
    printf("3. SAIR\n");
    printf("Escolha: \n");
    scanf("%d", &escolhajogador);

    switch (escolhajogador)
    {
    case 1:
       printf("\n ****VAMOS JOGAR!**** \n\n");
        break;
    case 2:
       printf("\n *** REGRAS *** \n A CARTA MAIOR VENCE!  \n\n");
       exit(0);
        
    case 3:
       printf("\n QUE PENA ;(  \n\n");
       exit(0);
    
    default:
        printf("Opção Invalida\n\n");
        exit(0);
    }

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
    int vitorias1 = 0;

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
    int vitorias2 = 0;

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

    printf("\n****COMPARAÇÕES DE CARTAS :****\n\n");

    if( populacao1 > populacao2 ){
        vitorias1++;
        printf("A população 1 é maior que a população 2\n");
    } else if ( populacao1 < populacao2 )
    {   vitorias2++;
        printf("A população 2 é maior que a população 1\n");
    } else {
        printf("Houve um empate!\n");
    }

    if( area1 > area2 ){ 
        vitorias1++;
        printf("A Area 1 é maior que a area 2\n");
    } else if( area1 < area2 ) {
        vitorias2++;
        printf("A area 2 é maior que a area 1\n");
    } else {
        printf("Houve um empate!\n");
    }

    if( pib1 > pib2 ){
        vitorias1++;
        printf("A PIB 1 é maior que a PIB 2\n");
    } else if( pib1 < pib2 ) {
        vitorias2++;
        printf("A PIB 2 é maior que a PIB 1\n");
    } else {
        printf("Houve um empate!\n");
    }

    if( pontosturisticos1 > pontosturisticos2 ){
        vitorias1++;
        printf("A cidade 1 tem mais pontos turisticos que a area 2\n");
    } else if( pontosturisticos1 < pontosturisticos2 ) {
        vitorias2++;
        printf("A cidade 2 tem mais pontos turisticos que a area 1\n");
    } else {
        printf("Houve um empate!\n");
    }

    if( densidadepopulacional1 < densidadepopulacional2 ){
        vitorias1++;
        printf("A Densidade populacional 1 é maior que a Densidade populacional 2\n");
    } else if( densidadepopulacional1 > densidadepopulacional2 ) {
        vitorias2++;
        printf("A Densidade populacional 2 é maior que a Densidade populacional 1\n");
    } else {
        printf("Houve um empate!\n");
    }

    if( pibpercapita1 > pibpercapita2 ){
        vitorias1++;
        printf("O pibpercapita 1 é maior que o pibpercapita 2\n");
    } else if( pibpercapita1 < pibpercapita2 ) {
        vitorias2++;
        printf("O pibpercapita 2 é maior que o pibpercapita 1\n");
    } else {
        printf("Houve um empate!\n");
    }

    if( superpoder1 > superpoder2 ){
        vitorias1++;
        printf("O super poder 1 é maior que o super poder 2\n");
    } else if( superpoder1 < superpoder2 ) {
        vitorias2++;
        printf("O super poder 2 é maior que o super poder 1\n");
    } else {
        printf("Houve um empate!\n");
    }
    printf("\n=== RESULTADO FINAL ===\n");
    if (vitorias1 > vitorias2) {
        printf("\n CARTA 1 VENCEU!\n\n");
    } else if (vitorias2 > vitorias1) {
        printf("\n CARTA 2 VENCEU!\n\n");
    } else {
        printf("EMPATE!\n");
    }

    return 0;
}