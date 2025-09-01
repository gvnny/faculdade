#include <stdio.h>
#include <string.h>

int main() {
    char estado[2];
    char codCarta[3];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int qtdPontosTuristicos;
    float densidadepopulacional;
    float pibPerCapita;

        // Carta 1

        printf("Digite o estado: ");
        scanf("%s", estado);

        printf("Digite o Código: ");
        scanf("%s", codCarta);

        getchar();
        printf("Digite a Cidade: ");
        fgets(cidade, sizeof(cidade), stdin);
        cidade[strcspn(cidade, "\n")] = '\0';

        printf("Digite a população: ");
        scanf("%d", &populacao);

        printf("Digite a área: ");
        scanf("%f", &area);

        printf("Digite o PIB: ");
        scanf("%f", &pib);

        printf("Digite a quantidade de pontos turísticos: ");
        scanf("%d", &qtdPontosTuristicos);

        printf("\n\n---------------------------------\n\n");

        printf("Carta 1:\n");
        printf("Estado: %s\n", estado);
        printf("Código: %s%s\n", estado, codCarta);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f bilhões de reais\n",pib);
        printf("Número de Pontos Turísticos: %d\n", qtdPontosTuristicos);

        // Nível aventureiro
        printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional = populacao / area);
        printf("PIB per Capita: %.2f reais\n", pibPerCapita = (pib * 1000000000) / populacao);

        printf("\n\n---------------------------------\n\n");

        // Carta 2

        printf("Digite o estado: ");
        scanf("%s", estado);

        printf("Digite o Código: ");
        scanf("%s", codCarta);

        getchar();
        printf("Digite a Cidade: ");
        fgets(cidade, sizeof(cidade), stdin);
        cidade[strcspn(cidade, "\n")] = '\0';

        printf("Digite a população: ");
        scanf("%d", &populacao);

        printf("Digite a área: ");
        scanf("%f", &area);

        printf("Digite o PIB: ");
        scanf("%f", &pib);

        printf("Digite a quantidade de pontos turísticos: ");
        scanf("%d", &qtdPontosTuristicos);

        printf("\n\n---------------------------------\n\n");

        printf("Carta 2:\n");
        printf("Estado: %s\n", estado);
        printf("Código: %s%s\n", estado, codCarta);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f bilhões de reais\n",pib);
        printf("Número de Pontos Turísticos: %d\n", qtdPontosTuristicos);

        // Nível aventureiro
        printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional = populacao / area);
        printf("PIB per Capita: %.2f reais\n", pibPerCapita = (pib * 1000000000) / populacao);

        printf("\n\n---------------------------------\n\n");
    }
