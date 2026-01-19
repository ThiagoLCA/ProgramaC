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
    int opcao1, opcao2; // cartas 1 e carta 2



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


     /* ===== Menu Interativo ===== */
    printf("\nEscolha o atributo 1 para comparar:\n");
    printf("\nEscolha o atributo 2 para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    
    printf("opcao1: ");
    scanf("%d", &opcao1);

   printf("opcao2: ");
    scanf("%d", &opcao2);

    printf("\nComparacao entre %s e %s\n", cidade1, cidade2);

   switch(opcao1) {
        case 1: // Populacao
            printf("Atributo: Populacao\n");
            printf("%s: %lu\n", cidade1, populacao1);
            printf("%s: %lu\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Carta 1 venceu!\n");
            else if (populacao1 < populacao2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 2: // Area
            printf("Atributo: Area (km²)\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);
            if (area1 > area2)
                printf("Carta 1 venceu!\n");
            else if (area1 < area2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB (bilhoes de reais)\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Carta 1 venceu!\n");
            else if (pib1 < pib2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos Turisticos
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", cidade1, pontos1);
            printf("%s: %d\n", cidade2, pontos2);
            if (pontos1 > pontos2)
                printf("Carta 1 venceu!\n");
            else if (pontos1 < pontos2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade (menor vence)
            printf("Atributo: Densidade Demografica (hab/km²)\n");
            printf("%s: %.2f\n", cidade1, densidade1);
            printf("%s: %.2f\n", cidade2, densidade2);
            if (densidade1 < densidade2)
                printf("Carta 1 venceu!\n");
            else if (densidade1 > densidade2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 6: // PIB per capita
            printf("Atributo: PIB per Capita (milhoes/habitante)\n");
            printf("%s: %.6f\n", cidade1, pibpercapita1);
            printf("%s: %.6f\n", cidade2, pibpercapita2);
            if (pibpercapita1 > pibpercapita2)
                printf("Carta 1 venceu!\n");
            else if (pibpercapita1 < pibpercapita2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 7: // Super Poder
            printf("Atributo: Super Poder\n");
            printf("%s: %.2f\n", cidade1, superpoder1);
            printf("%s: %.2f\n", cidade2, superpoder2);
            if (superpoder1 > superpoder2)
                printf("Carta 1 venceu!\n");
            else if (superpoder1 < superpoder2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    switch(opcao2) {
        case 1: // Populacao
            printf("Atributo: Populacao\n");
            printf("%s: %lu\n", cidade1, populacao1);
            printf("%s: %lu\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Carta 1 venceu!\n");
            else if (populacao1 < populacao2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 2: // Area
            printf("Atributo: Area (km²)\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);
            if (area1 > area2)
                printf("Carta 1 venceu!\n");
            else if (area1 < area2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB (bilhoes de reais)\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Carta 1 venceu!\n");
            else if (pib1 < pib2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos Turisticos
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", cidade1, pontos1);
            printf("%s: %d\n", cidade2, pontos2);
            if (pontos1 > pontos2)
                printf("Carta 1 venceu!\n");
            else if (pontos1 < pontos2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade (menor vence)
            printf("Atributo: Densidade Demografica (hab/km²)\n");
            printf("%s: %.2f\n", cidade1, densidade1);
            printf("%s: %.2f\n", cidade2, densidade2);
            if (densidade1 < densidade2)
                printf("Carta 1 venceu!\n");
            else if (densidade1 > densidade2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 6: // PIB per capita
            printf("Atributo: PIB per Capita (milhoes/habitante)\n");
            printf("%s: %.6f\n", cidade1, pibpercapita1);
            printf("%s: %.6f\n", cidade2, pibpercapita2);
            if (pibpercapita1 > pibpercapita2)
                printf("Carta 1 venceu!\n");
            else if (pibpercapita1 < pibpercapita2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 7: // Super Poder
            printf("Atributo: Super Poder\n");
            printf("%s: %.2f\n", cidade1, superpoder1);
            printf("%s: %.2f\n", cidade2, superpoder2);
            if (superpoder1 > superpoder2)
                printf("Carta 1 venceu!\n");
            else if (superpoder1 < superpoder2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }
    return 0;
}