#include <stdio.h>

int main() {
    /* Carta 1 */
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibpercapita1;
    float superpoder1;



    /* Carta 2 */
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibpercapita2;
    float superpoder2;

    /* CARTA 1  */
   printf("\n Cadastro da Carta 1 \n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo1);

    getchar(); // limpa buffer

    printf("Nome da Cidade: ");
    fgets(cidade1, 50, stdin);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    
    /* ===== CARTA 2 ===== */
    printf("\n Cadastro da Carta 2 \n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    getchar(); // limpa buffer

    printf("Nome da Cidade: ");
    fgets(cidade2, 50, stdin);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

     /* ===== SUPER PODER ===== */
    superpoder1 =
        (float)populacao1 +
        area1 +
        pib1 +
        (float)pontos1 +
        pibpercapita1 +
        (1.0f / densidade1);

    superpoder2 =
        (float)populacao2 +
        area2 +
        pib2 +
        (float)pontos2 +
        pibpercapita2 +
        (1.0f / densidade2);



    /* EXIBICAO DOS DADOS */
    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.3f hab/km²\n", densidade1);
    printf("PIB Per Capita: %.6f milhoes por habitante\n", pibpercapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.3f hab/km²\n", densidade2);
    printf("PIB Per Capita: %.6f milhoes por habitante\n", pibpercapita2);

    // Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu  
    // (Carta 1 ou Carta 2), exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para 
    // falso – Carta 2 vence).

/* ===== COMPARAÇÃO ===== */
    printf("\nComparacao de Cartas:\n\n");

    printf("Populacao: Carta 1 venceu %lu\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);

    // Densidade: menor vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    if (populacao1 > populacao2){
    printf ("Carta 1 Venceu na População!! \n");

    } else {
    printf ("Carta 2 Venceu na população! \n"); 

    }

    return 0;
}