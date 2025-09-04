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

    // ---- COMPARAÇÃO ----
    int opcao1, opcao2;

    while (1) {
        printf("\n\nMenu do Jogo\n\n");
        printf("Escolha o PRIMEIRO atributo:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        printf("7. Sair\n");
        scanf("%d", &opcao1);

        if (opcao1 == 7) {
            printf("\nSaindo do jogo...\n");
            return 0;
        }

        printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
        for (int i = 1; i <= 6; i++) {
            if (i == opcao1) continue; // não mostra a opção já escolhida
            switch(i) {
                case 1: printf("1. População\n"); break;
                case 2: printf("2. Área\n"); break;
                case 3: printf("3. PIB\n"); break;
                case 4: printf("4. Pontos Turísticos\n"); break;
                case 5: printf("5. Densidade Populacional\n"); break;
                case 6: printf("6. PIB per Capita\n"); break;
            }
        }
        scanf("%d", &opcao2);

        if (opcao1 == opcao2) {
            printf("Erro: você escolheu o mesmo atributo duas vezes!\n");
            continue;
        }

        float valor1_carta1 = 0, valor1_carta2 = 0;
        float valor2_carta1 = 0, valor2_carta2 = 0;

        // função auxiliar em switch
        switch(opcao1) {
            case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
            case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
            case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
            case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; break;
            case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
            case 6: valor1_carta1 = pibPerCapita1; valor1_carta2 = pibPerCapita2; break;
        }

        switch(opcao2) {
            case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
            case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
            case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
            case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; break;
            case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
            case 6: valor2_carta1 = pibPerCapita1; valor2_carta2 = pibPerCapita2; break;
        }

        // regra especial densidade -> menor vence
        float pontosCarta1 = 0, pontosCarta2 = 0;

        pontosCarta1 += (opcao1 == 5) ? (valor1_carta1 < valor1_carta2) : (valor1_carta1 > valor1_carta2);
        pontosCarta2 += (opcao1 == 5) ? (valor1_carta2 < valor1_carta1) : (valor1_carta2 > valor1_carta1);

        pontosCarta1 += (opcao2 == 5) ? (valor2_carta1 < valor2_carta2) : (valor2_carta1 > valor2_carta2);
        pontosCarta2 += (opcao2 == 5) ? (valor2_carta2 < valor2_carta1) : (valor2_carta2 > valor2_carta1);

        float soma1 = valor1_carta1 + valor2_carta1;
        float soma2 = valor1_carta2 + valor2_carta2;

        printf("\nResultado da rodada:\n");
        printf("%s (%s) -> %.2f e %.2f | Soma: %.2f\n", cidade1, codCarta1, valor1_carta1, valor2_carta1, soma1);
        printf("%s (%s) -> %.2f e %.2f | Soma: %.2f\n", cidade2, codCarta2, valor1_carta2, valor2_carta2, soma2);

        if (soma1 > soma2) {
            printf("\nCarta 1 venceu a rodada!\n");
        } else if (soma2 > soma1) {
            printf("\nCarta 2 venceu a rodada!\n");
        } else {
            printf("\nEmpate!\n");
        }
    }

    return 0;
}