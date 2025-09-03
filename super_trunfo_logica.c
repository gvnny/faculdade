#include <stdio.h>
#include <string.h>

int main() {
    // Carta 1
    char estado1[2], codCarta1[3], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;
    int pontosTuristicos1;

    // Carta 2
    char estado2[2], codCarta2[3], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;
    int pontosTuristicos2;

         // ---- CARTA 1 ----
    printf("Carta 1:\n");
    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Digite o Código: ");
    scanf("%s", codCarta1);

    getchar(); // limpa buffer
    printf("Digite a Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1/densidade1);

    // ---- CARTA 2 ----
    printf("Carta 2:\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite o Código: ");
    scanf("%s", codCarta2);

    getchar(); // limpa buffer
    printf("Digite a Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (1/densidade2);

    // ---- RESULTADOS ----
    int opcao;

    while (1) { // Loop infinito

        printf("\n\nMenu do Jogo\n\n");
        printf("Escolha qual atributo quer comparar:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        printf("7. Sair\n");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("\nVocê escolheu População\n");
                if (populacao1 > populacao2) {
                    printf("\n\nCarta 1 Venceu! Ela tem a maior população\n");
                    printf("Carta 1: %lu\n", populacao1);
                    printf("Carta 2: %lu\n\n", populacao2);
                } else if (populacao1 == populacao2) {
                    printf("Empate!");
                } else {
                    printf("Carta 2 Venceu! Ela tem a maior população\n");
                    printf("Carta 1: %lu\n", populacao1);
                    printf("Carta 2: %lu\n\n", populacao2);
                }
                break;
            case 2:
                printf("\nVocê escolheu Área\n");
                if (area1 > area2) {
                    printf("Carta 1 Venceu! Ela tem a maior área\n");
                    printf("Carta 1: %.2f\n", area1);
                    printf("Carta 2: %.2f\n\n", area2);
                } else if (area1 == area2) {
                    printf("Empate!");
                } else {
                    printf("Carta 2 Venceu! Ela tem a maior área\n");
                    printf("Carta 1: %.2f\n", area1);
                    printf("Carta 2: %.2f\n\n", area2);
                }
                break;
            case 3:
                printf("\nVocê escolheu PIB\n");
                if (pib1 > pib2) {
                    printf("Carta 1 Venceu! Ela tem o maior PIB\n");
                    printf("Carta 1: %.2f\n", pib1);
                    printf("Carta 2: %.2f\n\n", pib2);
                } else if (pib1 == pib2) {
                    printf("Empate!");
                } else {
                    printf("Carta 2 Venceu! Ela tem o maior PIB\n");
                    printf("Carta 1: %.2f\n", pib1);
                    printf("Carta 2: %.2f\n\n", pib2);
                }
                break;
            case 4:
                printf("\nVocê escolheu Pontos Turísticos\n");
                if (pontosTuristicos1 > pontosTuristicos2) {
                    printf("Carta 1 Venceu! Ela tem mais pontos turísticos\n");
                    printf("Carta 1: %d\n", pontosTuristicos1);
                    printf("Carta 2: %d\n\n", pontosTuristicos2);
                } else if (pontosTuristicos1 == pontosTuristicos2) {
                    printf("Empate!");
                } else {
                    printf("Carta 2 Venceu! Ela tem mais pontos turísticos\n");
                    printf("Carta 1: %d\n", pontosTuristicos1);
                    printf("Carta 2: %d\n\n", pontosTuristicos2);
                }
                break;
            case 5:
                printf("\nVocê escolheu Densidade Populacional\n");
                if (densidade1 < densidade2) {
                    printf("Carta 1 Venceu! Ela tem a maior densidade populacional\n");
                    printf("Carta 1: %.2f\n", densidade1);
                    printf("Carta 2: %.2f\n\n", densidade2);
                } else if (densidade1 == densidade2) {
                    printf("Empate!");
                } else {
                    printf("Carta 2 Venceu! Ela tem a maior densidade populacional\n");
                    printf("Carta 1: %.2f\n", densidade1);
                    printf("Carta 2: %.2f\n\n", densidade2);
                }
                break;
            case 6:
                if (pibPerCapita1 > pibPerCapita2) {
                    printf("Carta 1 Venceu! Ela tem o maior PIB per capita\n");
                    printf("Carta 1: %.2f\n", pibPerCapita1);
                    printf("Carta 2: %.2f\n\n", pibPerCapita2);
                } else if (pibPerCapita1 == pibPerCapita2) {
                    printf("Empate!");
                } else {
                    printf("Carta 2 Venceu! Ela tem o maior PIB per capita\n");
                    printf("Carta 1: %.2f\n", pibPerCapita1);
                    printf("Carta 2: %.2f\n\n", pibPerCapita2);
                }
                break;
            case 7:
                printf("\nSaindo do Jogo...\n");
                return 0; // encerra o programa
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
        }

    }

    return 0;
}