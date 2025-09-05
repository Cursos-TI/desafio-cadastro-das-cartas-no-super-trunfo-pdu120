
#include <stdio.h>

int main() {
    // Variáveis da carta 01
    char estado01;
    char codigo01[40];
    char nomedacidade01[50];
    int populacao01;
    float area01;
    float pib01;
    int pontosturisticos01;
    float densidade01, pibpercapita01;

    // Variáveis da carta 02
    char estado02;
    char codigo02[40];
    char nomedacidade02[50];
    int populacao02;
    float area02;
    float pib02;
    int pontosturisticos02;
    float densidade02, pibpercapita02;

    // Entrada dos dados da carta 01
    printf("Cadastro da carta 01\n\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado01);  
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo01);
    printf("Digite o nome da cidade (sem espaço): ");
    scanf("%s", nomedacidade01);
    printf("Digite a população: ");
    scanf("%d", &populacao01);
    printf("Digite a área em km²: ");
    scanf("%f", &area01);
    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib01);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos01);

    // Cálculos carta 01
    densidade01 = populacao01 / area01;
    pibpercapita01 = (pib01 * 1000000000.0) / populacao01;

    // Entrada dos dados da carta 02
    printf("\nCadastro da carta 02\n\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado02);
    printf("Digite o código da carta (ex: A02): ");
    scanf("%s", codigo02);
    printf("Digite o nome da cidade (sem espaço): ");
    scanf("%s", nomedacidade02);
    printf("Digite a população: ");
    scanf("%d", &populacao02);
    printf("Digite a área em km²: ");
    scanf("%f", &area02);
    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib02);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos02);

    // Cálculos carta 02
    densidade02 = populacao02 / area02;
    pibpercapita02 = (pib02 * 1000000000.0) / populacao02;

    // Exibição das informações da carta 01
    printf("\n\nCARTA 01:\n\n");
    printf("Estado: %c\n", estado01);
    printf("Código: %c%s\n", estado01, codigo01);
    printf("Nome da cidade: %s\n", nomedacidade01);
    printf("População: %d\n", populacao01);
    printf("Área em km²: %.2f\n", area01);
    printf("PIB em bilhões de reais: %.2f\n", pib01);
    printf("Número de pontos turísticos: %d\n", pontosturisticos01);
    printf("Densidade populacional: %.2f hab/km²\n", densidade01);
    printf("PIB per capita: %.2f reais\n", pibpercapita01);

    // Exibição das informações da carta 02
    printf("\n\nCARTA 02:\n\n");
    printf("Estado: %c\n", estado02);
    printf("Código: %c%s\n", estado02, codigo02);
    printf("Nome da cidade: %s\n", nomedacidade02);
    printf("População: %d\n", populacao02);
    printf("Área em km²: %.2f\n", area02);
    printf("PIB em bilhões de reais: %.2f\n", pib02);
    printf("Número de pontos turísticos: %d\n", pontosturisticos02);
    printf("Densidade populacional: %.2f hab/km²\n", densidade02);
    printf("PIB per capita: %.2f reais\n", pibpercapita02);

    return 0;
}

