#include <stdio.h>
#include <string.h>

int main() {
    int qtdCartas;
    char estado[2];
    char codCarta[3];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int qtdPontosTuristicos;

    printf("Quantas cartas irá adicionar?");
    scanf("%d", &qtdCartas);

    for (int i = 0; i< qtdCartas; i++) {
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

        printf("Carta %d:\n",i+1);
        printf("Estado: %s\n", estado);
        printf("Código: %s%s\n", estado, codCarta);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %f km2\n", area);
        printf("PIB: %f bilhões de reais\n",pib);
        printf("Número de Pontos Turísticos: %d", qtdPontosTuristicos);

        printf("\n\n---------------------------------\n\n");
    }
}